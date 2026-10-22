#include <iostream>
#include <stack>
using namespace std;

bool isValid(string exp) {
    stack<char> st;

    for (char ch : exp) {

        // Push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // Check closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {

            // If stack is empty, invalid
            if (st.empty()) {
                return false;
            }

            char top = st.top();
            st.pop();

            // Check matching brackets
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    // Stack should be empty
    return st.empty();
}

int main() {
    string exp;

    cout << "Enter expression: ";
    cin >> exp;

    if (isValid(exp)) {
        cout << "Valid Expression";
    } else {
        cout << "Invalid Expression";
    }

    return 0;
}