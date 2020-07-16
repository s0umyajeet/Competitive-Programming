#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int n) {
        if (n < 10) return n;
        else return (n % 10) + sum_of_digits(n / 10);
}

int main() {
        int n;
        cin >> n;
        cout << sum_of_digits(abs(n));
        return 0;
}       