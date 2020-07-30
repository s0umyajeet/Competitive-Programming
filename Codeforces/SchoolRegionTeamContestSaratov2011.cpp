#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

        fstream input;
        input.open("input.txt", ios::in);
        fstream output;
        output.open("output.txt", ios::out);

	while (t--) {
                string s;
                int n;

                input >> s >> n;
                if (s == "front" && n == 1) output << "L";
                else if (s == "front" && n == 2) output << "R";
                else if (s == "back" && n == 1) output << "R";
                else output << "L";

	}
	return 0;
}