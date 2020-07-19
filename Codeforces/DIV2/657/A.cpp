#include <bits/stdc++.h>
using namespace std;
#define int long long
#define target "abacaba"
string s;
int countq = 0;

int count_q(string s) {
        int countqx = 0;
        for (auto x : s) if (x == '?') countqx++; 
        return countqx;
}

int count_occ(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
                if (s[i] == 'a') {
                        //cout << s.substr(i, 7) << endl;
                        if (s.substr(i, 7) == target) {
                                count++;
                        }
                }
        }
        return count;
}

bool process() {
        if (count_occ(s) == 1) {
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] == '?') s[i] = 'x';
                }
                return true;
        }

        string dic = target;
        int p = 0;
        bool done = false;
        for (int i = 0; i < s.size(); i++) {
                if (!done) {
                        if (s[i] == '?') {
                                string sample = s.substr(i, 7);
                                bool fail = false;
                                for (int k = 0; k < sample.size(); k++) {
                                        if (sample[k] != '?') {
                                                if (sample[k] != dic[k]) {
                                                        fail = true;
                                                }
                                        }
                                }
                                if (!fail) { 
                                        for (int j = 0; j < sample.size(); j++) {
                                                if (s[j] == '?') s[j] = dic[p];
                                        }
                                        done = true;
                                        i += 6;
                                }
                        }
                }
        }
        return done;
}

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                cin >> s;
                int countq = count_q(s);
                if (s == target) {
                        cout << "YES" << endl;
                        cout << target << endl;
                } else if (s.size() == 7 && countq == 7) {
                        cout << "YES" << endl;
                        cout << target << endl;
                } else {
                        if (process()) {
                                cout << "YES" << endl;
                                cout << s << endl;
                        } else {
                                cout << "NO" << endl;
                        }
                }

        }
}