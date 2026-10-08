//develop a programm using virtual function to demonstrate run time polymorphism with base class pointer #include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal *ptr;   // Base class pointer

    Dog d;
    Cat c;

    // Base class pointer pointing to Dog object
    ptr = &d;
    ptr->sound();

    // Base class pointer pointing to Cat object
    ptr = &c;
    ptr->sound();

    return 0;
}

