#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n, a, b, c, d, p, q, y;
                cin >> n >> a >> b >> c >> d >> p >> q >> y;
  
                vector<int> cities(n);
                for (auto &x : cities) cin >> x;

                //if he only walks;
                int dist_to_travel = abs(cities[b] - cities[a]);
                int time_only_walking = dist_to_travel * p;
                
                //if he takes train;
                //he has to walk some distance to reach the train 
                int dist_to_train = abs(cities[a] - cities[c]);  
                int time_to_train = dist_to_train * p;

                //he is able to take the train
                if (time_to_train == y) {   
                        //part of journey he travels using train
                        int dist_by_train = abs(cities[c] - cities[d]);
                        int time_in_train = dist_by_train * q;

                        //journey after station D
                        int remaining_dist = abs(cities[c] - cities[b]);
                        int time_remaining_walking = remaining_dist * p;

                        if (time_to_train + time_in_train + time_remaining_walking <= time_only_walking) 
                                cout << time_to_train + time_in_train + time_remaining_walking << endl;
                        else cout << time_only_walking << endl;
                //he misses the train
                } else {                    
                        cout << time_only_walking << endl;
                }
        }
        return 0;
}