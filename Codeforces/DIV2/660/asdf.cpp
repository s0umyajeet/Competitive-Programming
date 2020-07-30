#include <bits/stdc++.h>
using namespace std;

int main() {
        int testcases;
        cin >> testcases;
        while (testcases--) {
                int n;
                cin >> n;
                int eights;

                if (n % 4 == 0)
                        eights = (n / 4);
                else eights = (n / 4) + 1;

                for (int i = 0; i < (n - eights); i++) {
                        cout << 9;
                }
                for (int i = 0; i < eights; i++) {
                        cout << 8;
                }
                cout << endl;
        }
        return 0;
}


//1 - 4  1
//5 - 8  2
//9 - 12 3d1