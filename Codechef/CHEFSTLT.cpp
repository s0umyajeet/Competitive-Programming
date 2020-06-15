#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                
                int max_difference = 0;
                int min_difference = 0;
                
                string s1, s2;
                cin >> s1 >> s2;

                for (int i = 0; i < s1.length(); i++) {
                        if (s1[i] == '?' || s2[i] == '?') max_difference++;
                        if (s1[i] != '?' && s2[i] != '?') {
                                if (s1[i] != s2[i]) {
                                        min_difference++;
                                        max_difference++;
                                }
                        }
                }
                cout << min_difference << " " << max_difference << endl;        
        }
        return 0;
}