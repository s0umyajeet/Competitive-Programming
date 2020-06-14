#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                string s;
                cin >> s;

                int pairs = 0;
                for (int i = 0; i < s.size();) {
                        if (s[i] == 'x') {
                                if (s[i + 1] == 'y') {
                                        pairs++;
                                        i += 2;
                                } else i++;
                        } else if (s[i] == 'y') {
                                if (s[i + 1] == 'x') {
                                        pairs++;
                                        i += 2;
                                } else i++;
                        }
                }
                cout << pairs << endl;
        }
        return 0;
}