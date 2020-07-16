#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, v;
        cin >> n >> v;

        int needed = 0;
        int tank = 0;
        int cost = 0;

        for (int i = 1; i <= n; i++, tank--) {
                needed = n - i;
                if (tank < needed) {
                        if (needed > v) {
                                tank = v;
                                cost += i * v;
                        } else {
                                tank = needed;
                                cost += i * needed;
                        }                
                } 
        }
        cout << cost << endl;
}