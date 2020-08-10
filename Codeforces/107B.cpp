#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

struct friendd {
        string name;
        int pizza = 0;
        int girls = 0;
        int taxis = 0;
};

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n;
                cin >> n;

                int max_girls = -9;
                int max_taxis = -9;
                int max_pizza = -9;

                vector<friendd> v(n);
                for (int i = 0; i < n; i++) {
                        int k;
                        string name;
                        cin >> k >> name;
                        v[i].name = name;
                        
                        for (int j = 0; j < k; j++) {
                                string number;
                                cin >> number;
                                int p1 = stoi(number.substr(0, 2));
                                int p2 = stoi(number.substr(3, 2));
                                int p3 = stoi(number.substr(6, 2));  
                                // cout << p1 << " " << p2 << " " << p3 << endl;
                                string sample;
                                for (int i = 0; i < number.size(); i++) {
                                        if (number[i] != '-') {
                                                sample += number[i];
                                        }
                                }
                                bool flag = true;
                                for (int i = 1; i < sample.size(); i++) {
                                        if (sample[i] >= sample[i - 1]) {
                                                flag = false;
                                                break;
                                        }
                                }
                                if (flag) v[i].pizza++;
                                else if (p1 == p2 && p2 == p3) v[i].taxis++;
                                else v[i].girls++;
                        }
                        
                        if (v[i].pizza >= max_pizza) {
                                max_pizza = v[i].pizza;
                        }
                        if (v[i].girls >= max_girls) {
                                max_girls = v[i].girls;
                        }
                        if (v[i].taxis >= max_taxis) {
                                max_taxis = v[i].taxis;
                        }
                }

                vector<string> for_pizza;
                vector<string> for_girls;
                vector<string> for_taxis;

                for (int i = 0; i < v.size(); i++) {
                        if (v[i].pizza == max_pizza)
                                for_pizza.push_back(v[i].name);
                        if (v[i].girls == max_girls) 
                                for_girls.push_back(v[i].name);
                        if (v[i].taxis == max_taxis) 
                                for_taxis.push_back(v[i].name);
                }

                cout << "If you want to call a taxi, you should call: ";
                for (int i = 0; i < for_taxis.size(); i++) {
                        if (i != for_taxis.size() - 1) {
                                cout << for_taxis[i] << ", ";
                        } else cout << for_taxis[i] << ".";
                }
                cout << endl;
                cout << "If you want to order a pizza, you should call: ";
                for (int i = 0; i < for_pizza.size(); i++) {
                        if (i != for_pizza.size() - 1) {
                                cout << for_pizza[i] << ", ";
                        } else cout << for_pizza[i] << ".";
                }
                cout << endl;
                cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
                for (int i = 0; i < for_girls.size(); i++) {
                        if (i != for_girls.size() - 1) {
                                cout << for_girls[i] << ", ";
                        } else cout << for_girls[i] << ".";
                }
                cout << endl;
	}
	return 0;
}