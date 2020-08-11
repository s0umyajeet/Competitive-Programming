module _template;
import std.stdio;
import std.string;
import std.algorithm;
import std.container;
import std.range;
import std.math;
import std.numeric;
import std.conv;
import std.typecons;
import std.format;

struct IO {
        string[] tk;
        string read_string() {
                while (tk.empty) 
                        tk = readln.split;
                auto tkt = tk.front;
                tk.popFront;
                return tkt;
        }
        int read_int() { 
                return read_string.to!int; 
        }
        double read_double() { 
                return read_string.to!double; 
        }
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                int[] arr = new int[n];
                foreach (ref i; arr) i = cin.read_int;
                int count = 0;
                for (int i = 0; i < n - 1; i++) {
                        if (sum(arr[0..i + 1]) == sum(arr[i + 1..n]))
                                count++;
                }
                writeln(count);
        }        
}