#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, char c;
        int a = 0, b = 0;
        cin >> n;

        string s1, s2;
        string sorted1, sorted2;
        for (int i = 0; i < n; i++) {
                cin >> c;
                s1 += c;
        }
        for (int i = 0; i < n; i++) {
                cin >> c;
                s2 += c;
        }                 

        while (next_permutation(sorted1.begin(), sorted1.end()) != s1) a++;
        while (next_permutation(sorted2.begin(), sorted2.end()) != s2) b++;
        cout << abs(a - b) << endl;
        return 0;
}