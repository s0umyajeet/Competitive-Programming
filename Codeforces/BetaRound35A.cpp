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
        fstream input_file;
        input_file.open("input.txt", ios::in);
        fstream output_file;
        output_file.open("output.txt", ios::out);

	while (t--) {
		int n;
                input_file >> n;
                vector<bool> cup(3, false);
                cup[n - 1] = true;
                int chance = 3;
                while (chance--) {
                        int a, b;
                        input_file >> a >> b;
                        swap(cup[a - 1], cup[b - 1]);
                }
                if (cup[0] == true) output_file << 1 << endl;
                else if (cup[1] == true) output_file << 2 << endl;
                else output_file << 3 << endl;
	}
	return 0;
}