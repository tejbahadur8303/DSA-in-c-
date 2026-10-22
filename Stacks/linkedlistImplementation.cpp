#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    // Enqueue operation
    void enqueue(int value) {
        Node* newNode = new Node();

        newNode->data = value;
        newNode->next = NULL;

        // If queue is empty
        if (rear == NULL) {
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " inserted" << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow" << endl;
            return;
        }

        Node* temp = front;

        cout << front->data << " deleted" << endl;

        front = front->next;

        // If queue becomes empty
        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
    }

    // Display operation
    void display() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;

        cout << "Queue elements: ";

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Menu ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 4);

    return 0;
}
































//decending order 
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

class PriorityQueue {
    Node* front;

public:
    PriorityQueue() {
        front = NULL;
    }

    // Insert in descending order
    void insert(int value) {
        Node* newNode = new Node();

        newNode->data = value;
        newNode->next = NULL;

        // Insert at front if queue is empty
        // or value is greater than the front
        if (front == NULL || value > front->data) {
            newNode->next = front;
            front = newNode;
        }
        else {
            Node* temp = front;

            // Find correct position
            while (temp->next != NULL &&
                   temp->next->data >= value) {
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }

        cout << value << " inserted" << endl;
    }

    // Delete highest priority element
    void deleteElement() {
        if (front == NULL) {
            cout << "Priority Queue Underflow" << endl;
            return;
        }

        Node* temp = front;

        cout << front->data << " deleted" << endl;

        front = front->next;

        delete temp;
    }

    // Display elements
    void display() {
        if (front == NULL) {
            cout << "Priority Queue is empty" << endl;
            return;
        }

        Node* temp = front;

        cout << "Priority Queue: ";

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    int choice, value;

    do {
        cout << "\n--- Descending Priority Queue ---" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value: ";
            cin >> value;
            pq.insert(value);
            break;

        case 2:
            pq.deleteElement();
            break;

        case 3:
            pq.display();
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 4);

    return 0;
}