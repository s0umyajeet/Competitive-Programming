#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> factors(int x) {
        vector<int> v;
        for (int i = 1; i <= sqrt(x); i++) {
                if (x % i == 0) {
                        v.push_back(i);
                        if (i != x / i)
                        v.push_back(x / i);
                }
        }
        return v;
}

int32_t main() {
        int a, b;
        cin >> a >> b;
        int k, m;
        cin >> k >> m;

        set<int> divide;
        set<int> not_divide;
        
        int input;
        
        for (int i = 0; i < k; i++) {
                cin >> input;
                divide.insert(input);
        }
        for (int i = 0; i < m; i++) {
                cin >> input;
                not_divide.insert(input);
        }
        
        int count = 0;
        
        for (int i = a; i <= b; i++) {
                vector<int> v = factors(i);
                int flag = 0;
                int flag2 = 0;
                for (int j = 0; j < v.size(); j++) {
                        auto itr1 = divide.find(v[j]);
                        if (itr1 == divide.end() && divide.size() > 0) {
                                flag = 1;
                                break;
                        }
                        auto itr2 = not_divide.find(v[j]);
                        if (itr2 != not_divide.end() && not_divide.size() > 0) {
                                flag2 = 1;
                                break;
                        }
                }
                if (flag == 0 && flag2 == 0) count++;
        }
        
        cout << count << endl;
        return 0;
}