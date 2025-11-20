#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    cout << "Masukkan kalimat: ";
    string input;
    getline(cin, input);

    stack<char> st;
    for (char c : input) st.push(c);

    string reversed;
    while (!st.empty()) {
        reversed.push_back(st.top());
        st.pop();
    }

    cout << "Hasil balik: " << reversed << endl;
    return 0;
}