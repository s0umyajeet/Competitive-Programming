#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int cubes;
                cin >> cubes;

                map<int, int> m;
                for (int i = 0; i < cubes; i++) {
                        int cube;
                        cin >> cube;
                        char colon;
                        cin >> colon;
                        int input = 1;
                        int count = 0;
                        while (input != 0) {
                                cin >> input;
                                count++;
                        }
                        count--;
                        m[i] = count;
                }
                int ans = 0;

                for (int i = 0; i < cubes; i++) {
                        ans += 6 - m[i];
                }
                cout << ans << endl;
        }
        return 0;
}