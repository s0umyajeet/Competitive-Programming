#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                string s;
                cin >> s;

                vector<char> st;
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] == '(') st.push_back('(');
                        else if (s[i] == ')') {
                                if (st.empty() == false && st.back() == '(') {
                                        st.pop_back();
                                } else st.push_back(')');
                        }
                }
                cout << st.size() / 2 << endl;
        }
        return 0;
}