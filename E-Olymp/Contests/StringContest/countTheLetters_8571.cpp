#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        char c;
        getline(cin >> ws, s);
        cin >> c;
        char other;
        if (c < 97) {
                other = c + 32;
        } else {
                other = c - 32;
        }
        int count = 0;
        for (auto x : s) {
                if (x == c || x == other)
                        count++;
        }
        cout << count << endl;
        return 0;
}
