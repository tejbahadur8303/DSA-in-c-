// #include<iostream>
// using namespace std;
// struct node
// {
//     int val;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         val =data;
//         left = right = NULL;
//     }
// };

// int inorder(node *root)
// {
//     if(root == NULL)
//      return ;
//     inorder(root -> left)
//       return root->var;

//     inorder(root->right)

//      return 1+CountNodes(root->left)+CountNodes(root->right);
// }

// int main(){
//     node *root =new node('A');
//     root ->left=new node('B');
//     root->right =new node('C');
//     root ->left->left=new node('D');
//     root ->left->right=new node('E');

//     cout<<"The count of nodes = "<<CountNodes(root)<<endl;
// }








// #include <iostream>
// using namespace std;

// int main() {
//     int day, month, year;

//     // Input day
//     cout << "Enter day: ";
//     cin >> day;

//     if (day <= 0) {
//         cout << "Invalid day! Day cannot be negative or zero." << endl;
//         return 0;
//     }

//     // Input month
//     cout << "Enter month: ";
//     cin >> month;

//     if (month <= 0 || month > 12) {
//         cout << "Invalid month! Month must be between 1 and 12." << endl;
//         return 0;
//     }

//     // Input year
//     cout << "Enter year: ";
//     cin >> year;

//     if (year <= 0) {
//         cout << "Invalid year! Year cannot be negative or zero." << endl;
//         return 0;
//     }

//     // Check leap year
//     bool leap = false;

//     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//         leap = true;

//     if (leap)
//         cout << year << " is a Leap Year" << endl;
//     else
//         cout << year << " is Not a Leap Year" << endl;

//     // Find number of days in the month
//     int daysInMonth;

//     if (month == 2) {
//         if (leap)
//             daysInMonth = 29;
//         else
//             daysInMonth = 28;
//     }
//     else if (month == 4 || month == 6 || month == 9 || month == 11) {
//         daysInMonth = 30;
//     }
//     else {
//         daysInMonth = 31;
//     }

//     // Check whether entered date is valid
//     if (day > daysInMonth) {
//         cout << "Invalid date! " << month << " has only "
//              << daysInMonth << " days." << endl;
//         return 0;
//     }

//     // Increase date by 1 day
//     day++;

//     // If last day of month
//     if (day > daysInMonth) {
//         day = 1;
//         month++;

//         // If December 31
//         if (month > 12) {
//             month = 1;
//             year++;
//         }
//     }

//     cout << "Next Date: " << day << "/" << month << "/" << year << endl;

//     return 0;
// }


















#include <iostream>
using namespace std;

// Function to check leap year
bool isLeapYear(int year) {
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}

// Function to find number of days in a month
int getDaysInMonth(int month, int year) {

    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }

    if (month == 4 || month == 6 ||
        month == 9 || month == 11) {
        return 30;
    }

    return 31;
}

int main() {

    int day, month, year;
    int addDays, addMonths, addYears;

    // Input date
    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    // Validate day
    if (day <= 0) {
        cout << "Invalid day!" << endl;
        return 0;
    }

    // Validate month
    if (month <= 0 || month > 12) {
        cout << "Invalid month!" << endl;
        return 0;
    }

    // Validate year
    if (year <= 0) {
        cout << "Invalid year!" << endl;
        return 0;
    }

    // Check valid date
    if (day > getDaysInMonth(month, year)) {
        cout << "Invalid date!" << endl;
        return 0;
    }

    // Input how much to add
    cout << "Enter days to add: ";
    cin >> addDays;

    cout << "Enter months to add: ";
    cin >> addMonths;

    cout << "Enter years to add: ";
    cin >> addYears;

    // Validate additions
    if (addDays < 0 || addMonths < 0 || addYears < 0) {
        cout << "Days, months and years cannot be negative!" << endl;
        return 0;
    }

    // --------------------------------
    // Add years
    // --------------------------------
    year = year + addYears;

    // --------------------------------
    // Add months
    // --------------------------------
    month = month + addMonths;

    while (month > 12) {
        month = month - 12;
        year++;
    }

    // --------------------------------
    // Fix date if February changes
    // --------------------------------
    int daysInMonth = getDaysInMonth(month, year);

    if (day > daysInMonth) {
        day = daysInMonth;
    }

    // --------------------------------
    // Add days
    // --------------------------------
    while (addDays > 0) {

        day++;
        addDays--;

        daysInMonth = getDaysInMonth(month, year);

        // Month completed
        if (day > daysInMonth) {

            day = 1;
            month++;

            // December completed
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    // Output
    cout << "Final Date: "
         << day << "/" << month << "/" << year << endl;

    return 0;
}