#include <bits/stdc++.h>
using namespace std;

int calculate_digits(int n) {
        if (n < 10) return 1;
        else return 1 + calculate_digits(n / 10);
}
int main() {
        int n;
        cin >> n;
        cout << calculate_digits(n) << endl;
        return 0;
}