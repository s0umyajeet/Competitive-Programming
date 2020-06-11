#include <bits/stdc++.h>
using namespace std;

int main() {
        float xi, yi;
        float xj, yj;
        int n, r;
        cin >> xi >> yi >> xj >> yj >> n >> r;
        float distance = sqrt(pow(abs(xi - xj), 2) + pow(abs(yi - yj), 2)); 
        if (distance * n <= r) cout << "yes" << endl;
        else cout << "no" << endl;
        return 0;
}