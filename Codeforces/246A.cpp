#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, k;
        cin >> n >> k;

        int count = 0;
        int input;

        for (int i = 0; i < n; i++) {
                cin >> input;
                if (5 - input >= k) count++;
        }
        cout << count / 3 << endl;
        return 0;
}