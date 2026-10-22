#include <iostream>
using namespace std;

#define SIZE 5

class PriorityQueue {
    int arr[SIZE];
    int n;

public:
    PriorityQueue() {
        n = 0;
    }

    // Insert element in ascending order
    void insert(int value) {
        if (n == SIZE) {
            cout << "Priority Queue Overflow" << endl;
            return;
        }

        int i = n - 1;

        // Shift larger elements to the right
        while (i >= 0 && arr[i] > value) {
            arr[i + 1] = arr[i];
            i--;
        }

        arr[i + 1] = value;
        n++;

        cout << value << " inserted" << endl;
    }

    // Delete highest priority element
    void deleteElement() {
        if (n == 0) {
            cout << "Priority Queue Underflow" << endl;
            return;
        }

        cout << arr[0] << " deleted" << endl;

        // Shift elements to the left
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    // Display elements
    void display() {
        if (n == 0) {
            cout << "Priority Queue is empty" << endl;
            return;
        }

        cout << "Priority Queue: ";

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    int choice, value;

    do {
        cout << "\n--- Priority Queue Menu ---" << endl;
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



// decending order
#include <iostream>
using namespace std;

#define SIZE 5

class PriorityQueue {
    int arr[SIZE];
    int n;

public:
    PriorityQueue() {
        n = 0;
    }

    // Insert element in descending order
    void insert(int value) {
        if (n == SIZE) {
            cout << "Priority Queue Overflow" << endl;
            return;
        }

        int i = n - 1;

        // Shift smaller elements to the right
        while (i >= 0 && arr[i] < value) {
            arr[i + 1] = arr[i];
            i--;
        }

        arr[i + 1] = value;
        n++;

        cout << value << " inserted" << endl;
    }

    // Delete highest priority element
    void deleteElement() {
        if (n == 0) {
            cout << "Priority Queue Underflow" << endl;
            return;
        }

        cout << arr[0] << " deleted" << endl;

        // Shift elements to the left
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    // Display elements
    void display() {
        if (n == 0) {
            cout << "Priority Queue is empty" << endl;
            return;
        }

        cout << "Priority Queue: ";

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    int choice, value;

    do {
        cout << "\n--- Priority Queue Menu ---" << endl;
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