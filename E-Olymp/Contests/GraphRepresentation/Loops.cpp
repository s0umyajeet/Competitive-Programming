#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        
        int input;
        string ans = "NO";

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input == 1 && i == j) ans = "YES";
                }
        }
        cout << ans << endl;
        return 0; 
}