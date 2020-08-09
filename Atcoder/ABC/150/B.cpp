#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, count = 0;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n; i++) {
                if (i < n - 3) {
                        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') count++;
                }
        }
        cout << count << endl;
        return 0;
}

