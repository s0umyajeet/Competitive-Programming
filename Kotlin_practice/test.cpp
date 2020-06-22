#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<int> arr = {1, 3, 4, 5};
        for (int k = 0; k < 4; k++) {
                for (int i = k; i < 4; i++) {
                        for (int j = i; j < 4; j++) {
                                cout << arr[j] << " ";
                        }
                        cout << endl;
                }
        }
        return 0;
}