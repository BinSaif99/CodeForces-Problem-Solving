#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        string s;
        cin >> s;

        stack<char> st;
        for (char c : s) {
            st.push(c);
            if (st.size() >= 3) {
                char c3 = st.top(); st.pop();
                char c2 = st.top(); st.pop();
                char c1 = st.top(); st.pop();
                if (c1 == '1' && c2 == '0' && c3 == '0') {
                    continue;
                } else {
                    st.push(c1);
                    st.push(c2);
                    st.push(c3);
                }
            }
        }

        cout << "Case " << i << ": ";
        if (st.empty()) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}

