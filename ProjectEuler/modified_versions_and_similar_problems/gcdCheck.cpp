#include <iostream>
using namespace std;

int gcd(int a, int b) {
        if (b == 0)
        return a;
        else return gcd(b, a % b);       
}
int main() {
        int x = gcd (270, 120);
        cout << x;
        return 0;
}