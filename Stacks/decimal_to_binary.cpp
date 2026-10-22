#include<iostream>
using namespace std;
//decimal to binary
int main() {
    int n;
    cin >> n;

    stack<int> st;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    while (n > 0) {
        st.push(n % 2);
        n /= 2;
    }

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}

