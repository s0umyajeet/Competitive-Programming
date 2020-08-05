#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);   
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int n;
                cin >> n;
                string s;
                cin >> s;

                stack<char> st;
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] == '(') {
                                st.push('(');
                                cout << "Terminating1" << endl;
                        } else if (s[i] == ')' && st.top() == '(') {
                                st.pop();
                                cout << "Terminating2" << endl;
                        } else if (s[i] == ')' && st.top() != '(') {
                                st.push(')');
                                cout << "Terminating3" << endl;
                        } else if (s[i] == ')' && st.size() == 0) {
                                st.push(')');
                                cout << "Terminating4" << endl;
                        }
                }
                cout << st.size() / 2 << endl;
	}
	return 0;
}