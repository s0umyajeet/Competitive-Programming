#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        
        vector<int> sources(n, 1);
        vector<int> sinks(n, 1);

        int input;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input == 1) {
                                sources[j] = -1;
                                sinks[i] = -1;
                        }
                }
        }

        cout << count(sources.begin(), sources.end(), 1) << " ";
        for (int i = 0; i < n; i++) if (sources[i] == 1) cout << i + 1 << " ";
        cout << endl;
        cout << count(sinks.begin(), sinks.end(), 1) << " ";
        for (int i = 0; i < n; i++) if (sinks[i] == 1) cout << i + 1 << " ";        
        return 0;
}