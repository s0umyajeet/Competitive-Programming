#include <bits/stdc++.h>
using namespace std;

void printBinary(int n) {
        string ans;
        cout << n << " in binary: ";
        while (n) {
                ans += to_string(n & 1);
                n >>= 1;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
}
int main() {
        int a, b;
        cin >> a >> b;
        printBinary(a);
        printBinary(b);        
        cout << "a or b: " << (a | b) << endl;
}