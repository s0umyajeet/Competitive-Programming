#include <bits/stdc++.h>
using namespace std;

struct point{
        int x, y;
};
struct rectangle {
        point lowerCorner;
        point upperCorner;
};

int main() {
        vector<rectangle> v(3);

        for (int i = 0; i < 3; i++) {
                cin >> v[i].lowerCorner.x >> v[i].lowerCorner.y;
                
                v[i].lowerCorner.x += 100;
                v[i].lowerCorner.y += 100;

                cin >> v[i].upperCorner.x >> v[i].upperCorner.y;
                
                v[i].upperCorner.x += 100;
                v[i].upperCorner.y += 100;

                v[i].upperCorner.x--;
                v[i].upperCorner.y--;
 
        }
        
        vector<vector<int>> mat(200, vector<int>(200, 0));
        
        for (int k = 0; k < 3; k++) {
                for (int i = v[k].lowerCorner.x; i < v[k].upperCorner.x; i++) {
                        for (int j = v[k].lowerCorner.y; j < v[k].upperCorner.y; j++) {
                                mat[i][j] = 1;
                        }                
                }
        }

        int count = 0;
        for (int i = 0; i < 200; i++) {
                for (int j = 0; j < 200; j++) {
                        if (mat[i][j]) count++;
                }
        }
        cout << count << endl;
}