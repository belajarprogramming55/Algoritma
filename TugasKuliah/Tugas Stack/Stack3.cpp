#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string s;
    // Baca satu baris ekspresi
    if (!getline(cin, s)) return 0;

    stack<char> st;
    bool valid = true;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) { valid = false; break; }
            char t = st.top(); st.pop();
            if ((c == ')' && t != '(') ||
                (c == ']' && t != '[') ||
                (c == '}' && t != '{')) {
                valid = false;
                break;
            }
        }
    }

    if (!st.empty()) valid = false;

    cout << (valid ? "Valid" : "Tidak Valid") << endl;
    return 0;
}