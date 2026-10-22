#include<iostream>
using namespace st;
nt main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    stack<int> st;

    if (n == 0) {
        cout << "Binary: 0";
        return 0;
    }

    // Push remainders into the stack
    while (n > 0) {
        st.push(n % 2);
        n = n / 2;
    }

    // Pop and print binary number
    cout << "Binary: ";
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}
