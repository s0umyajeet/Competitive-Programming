#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        vector<int> status(n, -1);
        set<int> sources, sinks;

        int input;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input == 1) {
                                if (status[i] == -1) sources.insert(i + 1);
                                if (status[j] == -1) sinks.insert(j + 1);
                                status[i] = 1;
                                status[j] = 1;
                        }
                }
        }

        for (int i = 0; i < n; i++) {
                if (status[i] == -1) {
                        sources.insert(i + 1);
                        sinks.insert(i + 1);
                }
        }
        cout << sources.size() << " ";
        for (auto x : sources) cout << x << " ";
        cout << endl;
        cout << sinks.size() << " ";
        for (auto x : sinks) cout << x << " ";
        return 0;
}