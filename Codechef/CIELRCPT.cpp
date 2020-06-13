#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int p;
                cin >> p;
                
                if (p > 11) 
                        cout << (p / 2048) + __builtin_popcount(p % 2048) << endl;
                else 
                        cout << __builtin_popcount(p) << endl;
        }
        return 0;
}