#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        cin >> s;

        int f = 0;
        int b = s.size() - 1;

        int degree = 0;
        while (f <= b) {
                if (s[f] == s[b]) 
                        degree++;
                f++; b--;
        }
        
        cout << degree << endl;
        return 0;
}