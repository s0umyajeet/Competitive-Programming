#include <bits/stdc++.h>
using namespace std;

double distance(pair<int, int> p1, pair<int, int> p2) {
        double dist = sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
        return dist;
}

int main() {
        int t;
        cin >> t;
        while (t--) {
                int r;
                cin >> r;

                vector<pair<int, int>> v(3); 
                //0 for chef 1 for server 2 for sous
                for (int i = 0; i < 3; i++) {
                        cin >> v[i].first >> v[i].second;
                }

                double chef_server = distance(v[0], v[1]);
                double chef_sous = distance(v[0], v[2]); 
                double sous_server = distance(v[1], v[2]);

                bool possible = false;
                if (chef_server <= r && chef_sous <= r) {
                        cout << "yes" << endl;
                        possible = true;
                } else {
                        if (chef_server > r) {
                                if (chef_sous <= r && sous_server <= r) {
                                        cout << "yes" << endl;
                                        possible = true;
                                }
                        } else if (chef_sous > r) {
                                if (chef_server <= r && sous_server <= r) {
                                        cout << "yes" << endl;
                                        possible = true;
                                }
                        }
                }
                if (!possible) cout << "no" << endl;
        }
        return 0;
}

