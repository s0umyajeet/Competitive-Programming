#include <bits/stdc++.h>
using namespace std;

double calc_dist(int x1, int y1, int z1, int x2, int y2, int z2) {
        double dist = (double)(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
        return dist;
}
int main() {
        vector<int> b(3);
        vector<int> c(3);

        cin >> c[0] >> c[1];
        c[2] = 0;
        cin >> b[0] >> b[1] >> b[2];

        double focal_length = calc_dist(c[0], c[1], c[2], b[0], b[1], b[2]);
        cout << fixed << setprecision(3) << (double)(1 / sqrt(focal_length)) << endl;
}