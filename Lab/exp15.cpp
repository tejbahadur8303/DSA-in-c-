//design a programm to ilustrte function overriding in  a derived class 
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Function overriding
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal a;
    Dog d;

    a.sound();  // Base class function
    d.sound();  // Derived class overridden function

    return 0;
}