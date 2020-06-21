#include <iostream>
using namespace std;

class A {
        public:
        int a, b, c;

        A() {}

        A(int A, int B, int C) {
                a = A;
                b = B;
                c = C;
        }

        // A(int a, int b, int c) {
        //         this->a = a;
        //         this->b = b;
        //         this->c = c;
        // }
};

int main() {
        A o1;
        A o2(1, 2, 3);
        cout << o1.a << " " << o1.b << " " << o1.c << endl;
        cout << o2.a << " " << o2.b << " " << o2.c << endl;
}

