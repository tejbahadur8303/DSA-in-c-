// write  a program using c++ features using auto and range based for loop to traverse and display the element of collection 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> numbers = {10, 20, 30, 40, 50};

//     cout << "Elements of the collection are: ";

//     // Range-based for loop with auto
//     for (auto element : numbers) {
//         cout << element << " ";
//     }

//     return 0;
// }



///design a class to represent a bank a ccount with proper data hidin g and memeber functions for depsition and withdraw operaation


// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     // Data hiding
//     int accountNumber;
//     string accountHolder;
//     double balance;

// public:
//     // Function to initialize account details
//     void createAccount(int accNo, string name, double initialBalance) {
//         accountNumber = accNo;
//         accountHolder = name;
//         balance = initialBalance;
//     }

//     // Deposit operation
//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             cout << "Amount deposited successfully." << endl;
//         } else {
//             cout << "Invalid deposit amount." << endl;
//         }
//     }

//     // Withdrawal operation
//     void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             cout << "Amount withdrawn successfully." << endl;
//         } else {
//             cout << "Insufficient balance or invalid amount." << endl;
//         }
//     }

//     // Display account details
//     void display() {
//         cout << "\nAccount Number: " << accountNumber << endl;
//         cout << "Account Holder: " << accountHolder << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main() {
//     BankAccount account;

//     account.createAccount(101, "Rahul", 5000);

//     account.display();

//     account.deposit(2000);
//     account.withdraw(1500);

//     account.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;
//  class student{
//     public:
//     void study(){
//         std::cout<<"studying for exam";
//     }
//  };
//  int main(){
//     std::unique_ptr<student>s1=std::make_unique<student>();
//     auto s2 = std::make_unique<student>();
 

//  s1->study();
//  return 0;
// }

// #include<iostream>
// #include<memory>
// using name space std;
//  class student{
//     public:
//     student(){std::cout<<"studetn created \n";}
//      ~student(){std::cout<<"studetn destroyed \n";}
//      void study(){std::cout<<"studying...\n";}
//  };
//  int main(){
//     std::shared_ptr<student>ptr1=std::make

//     std::cout<<"count:"<<ptr.use_count()<<"\n"

//     {
//         std::shared_ptr<student>ptr2=ptr1;
//         std::

//     }

    
//  }



// # Practical 06
//Develop a pprogramm that use different type of constructor and deconstructor behaviour in object life cycle management 
// #include <iostream>
// using namespace std;

// class Student {
// private:
//     string name;
//     int age;

// public:
//     // 1. Default Constructor
//     Student() {
//         name = "Unknown";
//         age = 0;
//         cout << "Default Constructor called" << endl;
//     }

//     // 2. Parameterized Constructor
//     Student(string n, int a) {
//         name = n;
//         age = a;
//         cout << "Parameterized Constructor called" << endl;
//     }

//     // 3. Copy Constructor
//     Student(const Student &s) {
//         name = s.name;
//         age = s.age;
//         cout << "Copy Constructor called" << endl;
//     }

//     // Display function
//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }

//     // Destructor
//     ~Student() {
//         cout << "Destructor called for " << name << endl;
//     }
// };

// int main() {

//     cout << "----- Object 1 -----" << endl;
//     Student s1;
//     s1.display();

//     cout << "\n----- Object 2 -----" << endl;
//     Student s2("Tej", 20);
//     s2.display();

//     cout << "\n----- Object 3 -----" << endl;
//     Student s3 = s2;
//     s3.display();

//     cout << "\nEnd of main()" << endl;

//     return 0;
// }


//## PRACTICAL 0 7
//implement a programm using static member and friend function to illustrate should data and controlled access


// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     int accountNumber;
//     double balance;

//     // Static member shared by all objects
//     static int totalAccounts;

// public:
//     // Constructor
//     BankAccount(int accNo, double bal) {
//         accountNumber = accNo;
//         balance = bal;
//         totalAccounts++;
//     }

//     // Friend function
//     friend void showAccountDetails(BankAccount obj);

//     // Static member function
//     static void showTotalAccounts() {
//         cout << "Total Accounts: " << totalAccounts << endl;
//     }
// };

// // Definition of static member
// int BankAccount::totalAccounts = 0;

// // Friend function definition
// void showAccountDetails(BankAccount obj) {
//     // Can access private members
//     cout << "Account Number: " << obj.accountNumber << endl;
//     cout << "Balance: " << obj.balance << endl;
// }

// int main() {

//     BankAccount a1(101, 5000);
//     BankAccount a2(102, 7500);

//     cout << "Account 1 Details:" << endl;
//     showAccountDetails(a1);

//     cout << "\nAccount 2 Details:" << endl;
//     showAccountDetails(a2);

//     cout << endl;
//     BankAccount::showTotalAccounts();

//     return 0;
// }


//PRACTICAL 08
//write a program to pass object as argument and return object from function to perform operations on user defined data type
// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     int real;
//     int imag;

// public:
//     // Constructor
//     Complex(int r = 0, int i = 0) {
//         real = r;
//         imag = i;
//     }

//     // Function to add two objects
//     Complex add(Complex c) {
//         Complex temp;

//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;

//         return temp;   // Returning object
//     }

//     // Display function
//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main() {

//     // Creating objects
//     Complex c1(10, 20);
//     Complex c2(5, 15);

//     cout << "First Complex Number: ";
//     c1.display();

//     cout << "Second Complex Number: ";
//     c2.display();

//     // Passing object as argument
//     Complex c3 = c1.add(c2);

//     // c3 is the returned object
//     cout << "Sum: ";
//     c3.display();

//     return 0;
// }







// Constructor overloading
#include <iostream>
using namespace std;
class Account
{
private:
    string holderName;
    double balance;

public:
    Account()
    {
        holderName = "Unknowm";
        balance = 0;
    }
    Account(string name)
    {
        holderName = name;
        balance = 0.0;
    }
    Account(string name, double initialBalance)
    {
        holderName = name;
        balance = initialBalance;
    }
    void display()
    {
        cout << "Holder: " << holderName << " Balance: " << balance << endl;
    }
};
int main()
{
    Account acc1;
    Account acc2("Vaibhav");
    Account acc3("Vaibhav", 5000.50);
    acc1.display();
    acc2.display();
    acc3.display();
}


//we cannot do constructor overriding because they have different name


//----------------------------------------constructor chaining
//calling onr constructor from another constructor
Intra - within same class
 inter - between different classs

#include<iostream>
using namespace std;
class Player{
    private:
    string name;
    int score;
    public:
    Player(string n,int s)
    {
        name=n;
        score=s;
        cout<<"Main Constructor called for "<<name<<endl;
    }
    Player(string n):Player(n,0)
    {
        cout<<"Single argument constructor finished";
    }
};
int main()
{
    Player p1("Alex");
    return 0;
}


class Parent{
public:

 Parent()
 {
    cout<<"Parent default constructor";
 }
};



// implement a program using samrt pointer(shared ptr,uniques ptr) to manage dynamic memory safely and avoid memory leakage
#include <iostream>
#include <memory>
using namespace std;
class Student
{
public:
    int marks;
    Student(int m)
    {
        marks = m;
    }
    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    unique_ptr<Student> s1 = make_unique<Student>(85);
    cout << "Using Unique Pointer:" << endl;
    s1->display();
    shared_ptr<Student> s2 = make_shared<Student>(90);
    shared_ptr<Student> s3 = s2;
    cout << "\nUsing Shared Pointer:" << endl;
    s2->display();
    cout << "Number of owners: "<< s2.use_count() << endl;
    return 0;
}




#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic array of objects
    Student *students = new Student[n];

    // Pointer to object
    Student *ptr = students;

    // Input using pointer to object
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        (ptr + i)->input();
    }

    // Display using pointer to object
    cout << "\n----- Student Details -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        (ptr + i)->display();
    }

    // Free dynamically allocated memory
    delete[] students;

    return 0;
}