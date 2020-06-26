#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;

int32_t main() {
        int input;
        int i = 1;
        while (1) {
                cin >> input;
                if (input == 0) break;
                cout << "Case " << i << ": " << ceil((3 + sqrt(9 + 8 * input)) / 2) << endl;
                i++;
        }
        return 0;
}

