#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
        int n;
        cin >> n;

        vector<vector<int>> mat(n, vector<int>(n, 0));
        fstream file;
        file.open("matrix", ios::out);

        bool notDone = true;
        int choice;
        while (notDone) {
                int a, b;
                cin >> a >> b;

                mat[a - 1][b - 1] = 1;
                mat[b - 1][a - 1] = 1;

                cout << endl << "more?" ;
                cin >> choice;
                if (choice == 0) notDone = false;
        }

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        file << mat[i][j] << " ";
                }
                file << endl;
        }
        return 0;
}