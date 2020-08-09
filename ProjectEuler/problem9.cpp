#include <bits/stdc++.h>
using namespace std;

void calculate(int N) {
        int squaredSum = 0, c = 0;
        for (int a = 1; a <= N / 3; a++) {
                for (int b = a + 1; b <= N / 2; b++) {
                        c = N - a - b;
                        if (a * a + b * b == c * c) {
                            cout << a * b * c << endl;
                            return;
                        }
                }
        }
        cout << -1 << endl;
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);

        auto start = chrono::high_resolution_clock::now();
                calculate(1000);
        auto end = chrono::high_resolution_clock::now();

        double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        time_taken *= 1e-9;
        cout << "running time: " << fixed << time_taken << setprecision(20) << " sec" << endl;
        return 0;
}
//0.00096 sec


/* Naive Solution 
bool checkSquare(int x) {
        if (x < 0) return false;
        if (x == 0 || x == 1) return true;
        for (int i = 2; i * i <= x; i++) 
                if (i * i == x) return true;
        return false;
}
void calculate() {
        int squaredSum = 0, c = 0;
        for (int a = 1; a <= 1000; a++) {
                for (int b = a + 1; b <= 1000; b++) {
                        squaredSum = a * a + b * b;
                        if (checkSquare(squaredSum)) {
                                c = sqrt(squaredSum);
                                if (a + b + c == 1000) {
                                        cout << a << " " << b << " " << c << endl;
                                        cout << a * b * c << endl;
                                        return;
                                }
                        }
                 }
        }
}
//0.296 sec
*/

//Every pythagorean triplet can be expressed in the form of (m^2 - n^2, 2mn, m^2 + n^2)
/*
a= 2mn; b= m^2 -n^2; c= m^2 + n^2;
a + b + c = 1000;

2mn + (m^2 -n^2) + (m^2 + n^2) = 1000;
2mn + 2m^2 = 1000;
2m(m+n) = 1000;
m(m+n) = 500;

m>n;

m= 20; n= 5;

a= 200; b= 375; c= 425;
*/


