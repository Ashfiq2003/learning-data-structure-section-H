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
};

int main() {
    StudentDatabase db;

    db.insert(101, "Alice", 3.8);
    db.insert(102, "Bob", 3.5);
    db.insert(103, "Charlie", 3.9);

    int searchId = 102;
    Student* student = db.search(searchId);
    if (student) {
        cout << "Student found: ID=" << student->id << ", Name=" << student->name << ", CGPA=" << student->cgpa << endl;
    } else {
        cout << "Student with ID " << searchId << " not found." << endl;
    }

    return 0;
}
