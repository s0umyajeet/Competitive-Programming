#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {   
                int n;
                cin >> n;
                string s;
                cin >> s;

                int fitr = 0;
                int bitr = 0;

                int i = 0;
                while (i < n) {
                        if (s[i] == '1') {
                                fitr = i;
                                break;
                        }
                        i++;
                }
                int j = n - 1;
                while (j > -1) {
                        if (s[j] == '0') {
                                bitr = j;
                                break;
                        }
                        j--;
                }
                if (fitr >= bitr) cout << s << endl;
                else  {
                        string ans;
                        for (int i = 0; i < n; i++) {
                                if (i == fitr) {
                                   ans += '0';
                                   i = bitr;
                                } else ans += s[i];     
                        }
                        cout << ans << endl;
                }
        }
        return 0;
}
