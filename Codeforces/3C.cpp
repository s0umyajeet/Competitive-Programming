#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

char board[3][3];
bool alreadyWon = false;
bool illegal = false;
int c_0 = 0, c_1 = 0;

int checkIllegal() {
	if (abs(c_0 - c_1) > 1) {
		return 1;
		illegal = true;
	}
	else return 0;
}

int nextTurn() {
	if (!alreadyWon && !illegal) {
		if (c_0 < c_1) return 0;
		else if (c_0 == c_1) return 1;
		else return 2;
	}
}

char checkWon() {	
	if (!illegal) {
		//check row
		char winning = '_';
		for (int i = 0; i < 3; i++) {
			if (board[i][0] == board[i][1] == board[i][2]) {
				if (winning == '_' ) {
					winning = board[i][0];
					alreadyWon = true;
				} else {
					illegal = true;
				}
			}
		}

		//check col
		for (int j = 0; j < 3; j++) {
			if (board[0][j] == board[1][j] == board[2][j]) {
				if (winning == '_' ) {
					winning = board[0][j];
					alreadyWon = true;
				} else {
					illegal = true;
				}
			}
		}

		//check diag
		if (board[0][0] == board[1][1] == board[2][2]) {
			if (winning == '_' ) {
				winning = board[0][0];
				alreadyWon = true;
			} else {
				illegal = true;
			}
		}

		if (board[2][0] == board[1][1] == board[0][2]) {
			if (winning == '_' ) {
				winning = board[2][0];
				alreadyWon = true;
			} else {
				illegal = true;
			}
		}
		
		if (!illegal) return winning;
		else return 'l'; 
	}
	return 'n';
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		string row[3];
		cin >> row[0] >> row[1] >> row[2];

		
		for (int i = 0; i < 3; i++) 
			for (int j = 0; j < 3; j++) {
				board[i][j] = row[i][j];
				if (board[i][j] == '0') c_0++;
				if (board[i][j] == 'X') c_1++;
			}

		if (checkIllegal()) cout << "illegal" << endl;
		char winning = checkWon();
		if (winning != 'n' && winning != 'l') {
			if (winning == '0') cout << "the second player won" << endl;
			if (winning == '1') cout << "the first player won" << endl;
		} else if (winning == 'l') {
			cout << "illegal" << endl;
		}
		cout << winning << endl;
		
		int nextturn = nextTurn();
		if (nextturn == 0) cout << "second" << endl;
		else if (nextturn == 1) cout << "first" << endl;
		else cout << "draw" << endl;


	}
	return 0;
}