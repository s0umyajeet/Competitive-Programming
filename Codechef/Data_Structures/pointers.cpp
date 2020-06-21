#include <iostream>
using namespace std;

int main() {
        


        // int var;     //declaration of a variable;
        // var = 90;    //assigning a value to the variable..... defining the variable;
        //              //initializing a varaible

        // //there are two parts of using a variable in C and C++ 
        // //first one is declaration and the other is initializing

        // int var;

        // /****** some code  ***/
        // var = 56;

        // int var = 56;   //decalaration and well as initialization


        // //what are pointers?  pointers are also variables which store address of another variable
        // //suppose ther is an int variable ---- integer value for ex 932174
        // //suppose there is a string varible --- string value for ex. "hello"
        // //char variable --- character 'c' 'a' '>' '?' '1'
        // //pointer variable --- it stores address of another variable


        //abstract data structres -- creating data structures using basic data types and classes
        //queue, stack, tree, linked list, graph

        int a = 10;       //0x7ffdcdece2cc
        int *p = NULL;    
        p = &a;

        cout << &a << " " << p << endl;
        cout << a << " " << *p << endl;    //dereferencing a pointer
        cout << &p << endl;

        char x = 'c';
        //p = &x;

        char *cp = &x;

        //what is the data type of p?    //integer pointer or you can say pointer-to-an-integer
        //integer varaible for example, a in this case can only store integer values 
        //what is the data type of var a? integer or int

        /*
                int float char double bool
                unsigned signed long short
        */
}