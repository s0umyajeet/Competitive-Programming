#include <bits/stdc++.h>
using namespace std;

double calc_dist(double x1, double x2, double y1, double y2) {
        double dist = (double)(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        return dist;
}
int main() {
        double x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        if (x1 == x2 && y1 == y2) {
                if (r1 == r2) cout << -1 << endl;
                else cout << 0 << endl;
        } else {
                double centre_dist = calc_dist(x1, x2, y1, y2);
                double rad_dist = pow(r1 + r2, 2);
                if (centre_dist == rad_dist) 
                        cout << 1 << endl;
                else if (centre_dist < rad_dist)
                        cout << 2 << endl;
                else cout << 0 << endl;
        }
        return 0;
}