#include <iostream>
#include <stack>
using namespace std;

bool isValid(string exp) {
    stack<char> st;

    for (char ch : exp) {

        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // Closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {

            if (st.empty()) {
                return false;
            }

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {

                return false;
            }
        }
    }

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
}s