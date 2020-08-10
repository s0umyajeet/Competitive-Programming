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

struct pair {
        int first;
        int second;
}
 
void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                pair[5] arr;
                for (int i = 0; i < 5; i++) {
                        arr[i].first = cin.read_int;
                        arr[i].second = cin.read_int;
                }
                arr.sort!((a, b) => a.first < b.first);
                foreach (i; arr) {
                        writeln(i.first, " ", i.second);
                }
        }        
}