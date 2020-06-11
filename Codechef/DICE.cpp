#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n, dice_robot;
                cin >> n >> dice_robot;

                if (n == 1) {
                        if (dice_robot > 6) cout << "LOOSE" << endl;
                        else {
                                cout << "WIN" << endl;
                                cout << 0 << endl;
                        }
                } else {
                        if (dice_robot > 6) {
                                cout << "WIN" << endl;
                                cout << 0 << endl;
                        } else {
                                cout << "WIN" << endl;
                                cout << 7 - dice_robot << endl;
                        }
                }
        }
        return 0;
}