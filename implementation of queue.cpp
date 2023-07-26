#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (front == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    int getFront() {
        if (front == nullptr) {
            cout << "Queue is empty. No front element." << endl;
            return -1;
        }
        return front->data;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void display() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            Node* current = front;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.enqueue(40);

    myQueue.display();

    cout << "Front element: " << myQueue.getFront() << endl;

    myQueue.dequeue();
    myQueue.display();

    cout << "Is the queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << endl;

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();

    cout << "Is the queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
