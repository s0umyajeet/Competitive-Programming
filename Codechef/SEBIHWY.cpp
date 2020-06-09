#include <bits/stdc++.h>
using namespace std;

int main() {
        int te;
        cin >> te;
        while (te--) {
                int s, sg, fg, d, t;
                cin >> s >> sg >> fg >> d >> t;
                float speed = s + (d * 180.0f) / t;
                if (abs(speed - sg) > abs(speed - fg)) cout << "FATHER" << endl;
                else if (abs(speed - sg) < abs(speed - fg)) cout << "SEBI" << endl;
                else cout << "DRAW" << endl;
        }
        return 0;
}