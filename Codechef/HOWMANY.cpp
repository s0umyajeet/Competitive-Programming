#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        
        if (n == 0) {   //log for 0 is not defined
                cout << 1 << endl;
                return 0;
        }

        int digits = log10(n) + 1;
        
        if (digits == 1) cout << 1 << endl;
        else if (digits == 2) cout << 2 << endl;
        else if (digits == 3) cout << 3 << endl;
        else cout << "More than 3 digits" << endl;
        return 0;
}