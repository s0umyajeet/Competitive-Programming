#include <bits/stdc++.h>
using namespace std;

int main() {

        int n, count = 0;
        cin >> n;

        string s1, s2;
        for (int i = 1; i <= n; i++) {
                for (int j = i + 1; j <= n; j++) {
                        s1 = to_string(i);
                        s2 = to_string(j);
                        if (s1[0] == s2[s2.size() - 1] && s1[s1.size() - 1] == s2[0]) {
                                //cout << "(" << s1 << ", " << s2 << ")";
                                if (j > i) count += 2;
                                else count++;
                        }
                }
        }
        cout << count << endl;
        return 0;
}