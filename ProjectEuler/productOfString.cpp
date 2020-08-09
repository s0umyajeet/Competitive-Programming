#include <bits/stdc++.h>
using namespace std;

int main() {
        string s = "451327984";
        int product = 1;

        for (int i = 0; i < s.size(); i++) {
                product *= s[i] - 48;
        }
        cout << product << endl;
        return 0;
}