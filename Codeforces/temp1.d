module temp1;
import std.algorithm;
import std.stdio;
import std.string;

void main() {

        // char[] name;
        // write("Enter your name: ");
        // readln(name);
        // write("Hello ", name);
        
        int n;
        readf(" %s", n);

        char[][] v = new char[][n];

        writeln(v.length);
        for (int i = 0; i < n; i++) {
                readln(v[i]);
                v[i] = strip(v[i]);
        }

        for (int i = 0; i < n; i++) {
                writeln(v[i]);
        }


        // int[] arr = new int[n];


        // foreach (ref i; arr) {
        //         readf(" %s", i);
        // }

        // foreach (i; arr) {
        //         writeln(arr[i]);
        // }
        // for (int i = 0; i < n; i++) {
        //         readf(" %s", arr[i]);
        // }

        // for (int i = 0; i < n; i++) {
        //         writeln(arr[i]);
        // }

        
        // foreach(value; v) {
        //         readf(" %s", &string[value]);
        // }

        // foreach(value; v) {
        //         writeln(string[value]);
        // }
}