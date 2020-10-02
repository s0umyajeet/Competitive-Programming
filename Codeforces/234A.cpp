#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

bool checkMatrix(int rows, int cols, string s) {
	char mat[rows][cols];

	int i = 0;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++, i++) {
			mat[r][c] = s[i];
		}
	}
	
	bool fail = false;

	for (int c = 0; c < cols; c++) {
		string sample;
		for (int r = 0; r < rows; r++) {
			sample += mat[r][c];
		}
		if (sample.find('O') == string::npos) return true;
	}
	return false;
}


int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		string s;
		cin >> s;
		int facs[] = {1, 2, 3, 4, 6, 12};
		vector<int> validFacs;

		for (int i = 0; i < 6; i++) {
			if (checkMatrix(facs[i], 12 / facs[i], s)) {
				validFacs.push_back(facs[i]);
			}
		}

		cout << validFacs.size() << " ";
		for (int i = 0; i < validFacs.size(); i++) {
			cout << validFacs[i] << "x" << 12 / validFacs[i] << " ";
		} 
		cout << endl;
	}
	return 0;
}