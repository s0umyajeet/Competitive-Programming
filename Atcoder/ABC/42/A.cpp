//https://atcoder.jp/contests/abc042/tasks/abc042_a
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        int count5 = 0, count7 = 0;
        
        for (int i = 0; i < 3; i++) {
                int input;
                cin >> input;

                if (input == 5) count5++;
                if (input == 7) count7++;
        }
        if (count5 == 2 && count7 == 1) 
                cout << "YES";
        else cout << "NO";

        return 0;
}