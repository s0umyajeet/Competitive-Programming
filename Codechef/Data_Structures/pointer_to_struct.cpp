#include <iostream>
using namespace std;


//user defined data type  -- whatever  -student, lpu_student, telangana_students

//using struct or using class
//struct was used in C language. It is also supported in C++
//class is only a concept of C++ language 
//structs do not support OOP.... and classes support OOP
//you cannot do inheritance in structs XXXXXX
//but you can do inherticane in class
//polymorphism is one entity playing different roles....
//poly means many and morph means form


//everything in struct is public by default means there is no data safety....
//in class everything is public by default
//public and private are concepts introduced in C++ (OOP)

int main() {
        // you have a class of students, and the strength is 100 student.....
        // for these 100 students you need to collect some data...
        // for each student we should have name, age, roll_no etc.

        string student_name[100];      //related to a student
        int    student_age[100];       //related to a ntstudent
        int    marks[100];             //related to a stude


        //encapsulation

        //99 students left  3rd has gone
        //sai, ayush, aditya  kaushik    .....
        //19   19     19      32   .....
        //99   89     89     -12  ......

        //student_name[0] = "sai"
        //student_name[1] = "somu";
        /*
         .
         .

         .
         .
         */
        //student_name[100] = "xyz";