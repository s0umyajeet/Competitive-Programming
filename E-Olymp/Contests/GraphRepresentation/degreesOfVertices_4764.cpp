#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        int input = 0;
        
        for (int i = 0; i < n; i++) {
                int count = 0;
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input == 1) {
                                count++;
                        }
                }
                cout << count << endl;
        }
        return 0;
}