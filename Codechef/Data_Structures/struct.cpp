#include <iostream>
using namespace std;

struct sai {
        int a = 10;
        char c = 'a';
        bool my_bool = true;
};

int main() {
        sai obj1;             //int a;   int *p = &a;
        cout << obj1.a << " " << obj1.c << " " << obj1.my_bool << endl;

        sai *p = &obj1;       //sai pointer or pointer to struct sai

        cout << p->a << " " << p->c << " " << p->my_bool << endl;
        cout << (*p).a << " " << (*p).c << " " << (*p).my_bool << endl;
}