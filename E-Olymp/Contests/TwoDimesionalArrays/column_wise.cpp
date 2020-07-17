#include <bits/stdc++.h>
using namespace std;

int main() {
        int arr[4][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9},
                {3, 5, 6}
        };

        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 4; j++) {
                        cout << arr[j][i] << " ";
                }
                cout << endl;
        }
        return 0;
}
        