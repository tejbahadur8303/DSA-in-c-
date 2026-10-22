#include <iostream>
using namespace std;

#define SIZE 5

class Deque {
    int arr[SIZE];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    // Insert at Front
    void insertFront(int value) {
        if ((rear + 1) % SIZE == front) {
            cout << "Deque Overflow" << endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = SIZE - 1;
        }
        else {
            front--;
        }

        arr[front] = value;
        cout << value << " inserted at front" << endl;
    }

    // Insert at Rear
    void insertRear(int value) {
        if ((rear + 1) % SIZE == front) {
            cout << "Deque Overflow" << endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % SIZE;
        }

        arr[rear] = value;
        cout << value << " inserted at rear" << endl;
    }

    // Delete from Front
    void deleteFront() {
        if (front == -1) {
            cout << "Deque Underflow" << endl;
            return;
        }

        cout << arr[front] << " deleted from front" << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % SIZE;
        }
    }

    // Delete from Rear
    void deleteRear() {
        if (front == -1) {
            cout << "Deque Underflow" << endl;
            return;
        }

        cout << arr[rear] << " deleted from rear" << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = SIZE - 1;
        }
        else {
            rear--;
        }
    }

    // Display
    void display() {
        if (front == -1) {
            cout << "Deque is empty" << endl;
            return;
        }

        cout << "Deque elements: ";

        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear) {
                break;
            }

            i = (i + 1) % SIZE;
        }

        cout << endl;
    }
};

int main() {
    Deque dq;
    int choice, value;

    do {
        cout << "\n--- Double Ended Queue Menu ---" << endl;
        cout << "1. Insert Front" << endl;
        cout << "2. Insert Rear" << endl;
        cout << "3. Delete Front" << endl;
        cout << "4. Delete Rear" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value: ";
            cin >> value;
            dq.insertFront(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            dq.insertRear(value);
            break;

        case 3:
            dq.deleteFront();
            break;

        case 4:
            dq.deleteRear();
            break;

        case 5:
            dq.display();
            break;

        case 6:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 6);

    return 0;
}