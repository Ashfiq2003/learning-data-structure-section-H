#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    double cgpa;

    Student(int _id, const string& _name, double _cgpa)
        : id(_id), name(_name), cgpa(_cgpa) {}
};

class StudentTreeNode {
public:
    Student data;
    StudentTreeNode* left;
    StudentTreeNode* right;

    StudentTreeNode(int id, const string& name, double cgpa)
        : data(id, name, cgpa), left(nullptr), right(nullptr) {}
};

class StudentDatabase {
private:
    StudentTreeNode* root;

public:
    StudentDatabase() {
        root = nullptr;
    }

    void insert(int id, const string& name, double cgpa) {
        root = insertRec(root, id, name, cgpa);
    }

    StudentTreeNode* insertRec(StudentTreeNode* node, int id, const string& name, double cgpa) {
        if (!node) {
            return new StudentTreeNode(id, name, cgpa);
        }

        if (id < node->data.id) {
            node->left = insertRec(node->left, id, name, cgpa);
        } else if (id > node->data.id) {
            node->right = insertRec(node->right, id, name, cgpa);
        }

        return node;
    }

    Student* search(int id) {
        return searchRec(root, id);
    }

    Student* searchRec(StudentTreeNode* node, int id) {
        if (!node) {
            return nullptr;
        }

        if (node->data.id == id) {
            return &node->data;
        } else if (id < node->data.id) {
            return searchRec(node->left, id);
        } else {
            return searchRec(node->right, id);
        }
    }

    StudentTreeNode* findMin(StudentTreeNode* node) {
        while (node->left) {
            node = node->left;
        }
        return node;
    }

    StudentTreeNode* remove(StudentTreeNode* node, int id) {
        if (!node) {
            return nullptr;
        }

        if (id < node->data.id) {
            node->left = remove(node->left, id);
        } else if (id > node->data.id) {
            node->right = remove(node->right, id);
        } else {
            if (!node->left) {
                StudentTreeNode* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                StudentTreeNode* temp = node->left;
                delete node;
                return temp;
            }

            StudentTreeNode* temp = findMin(node->right);
            node->data = temp->data;
            node->right = remove(node->right, temp->data.id);
        }

        return node;
    }

    void remove(int id) {
        root = remove(root, id);
    }

    void inorderTraversal(StudentTreeNode* node) {
        if (!node) {
            return;
        }

        inorderTraversal(node->left);
        cout << "ID: " << node->data.id << ", Name: " << node->data.name << ", CGPA: " << node->data.cgpa << endl;
        inorderTraversal(node->right);
    }

    ~StudentDatabase() {
        destroyTree(root);
    }

    void destroyTree(StudentTreeNode* node) {
        if (node) {
            destroyTree(node->left);
            destroyTree(node->right);
            delete node;
        }
    }
    StudentTreeNode* getRoot() {
        return root;
    }
};

int main() {
    StudentDatabase db;

    db.insert(101, "Alice", 3.8);
    db.insert(102, "Bob", 3.5);
    db.insert(103, "Charlie", 3.9);

    cout << "Student Database:\n";
    db.inorderTraversal(db.getRoot());

    int searchId = 102;
    Student* student = db.search(searchId);
    if (student) {
        cout << "Student found: ID=" << student->id << ", Name=" << student->name << ", CGPA=" << student->cgpa << endl;
    } else {
        cout << "Student with ID " << searchId << " not found." << endl;
    }

    db.remove(102);
    cout << "Student with ID " << searchId << " removed." << endl;

    cout << "\nUpdated Student Database:\n";
    db.inorderTraversal(db.getRoot());

    return 0;
}
