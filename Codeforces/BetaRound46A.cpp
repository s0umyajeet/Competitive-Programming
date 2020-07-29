#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

bool checkVowel(char c) {
        if (c >= 97) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                        return true;
                } else return false;
        } else {
                if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
                        return true;
                } else return false;
        }
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		string s;
                getline(cin >> ws, s);
                for (int i = s.size() - 1; i >= 0; i--) {
                        if (s[i] != '?' && s[i] != ' ') {
                                if (checkVowel(s[i])) {
                                        cout << "YES" << endl;
                                        return 0;
                                } else {
                                        cout << "NO" << endl;
                                        return 0;
                                }
                        }
                }
	}
	return 0;
}