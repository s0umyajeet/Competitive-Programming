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
                for (int i = 0; i < n; i++) {
                        arr[i] = cin.read_int;
                }
                for (int i = 0; i < n; i++) {
                        for (int j = i + 1; j < n; j++) {
                                if (arr.canFind(arr[i] + arr[j])) {
                                        write(countUntil(arr, arr.find(arr[i] + arr[j])) + 1, " ");
                                        writeln(i + 1, " ", j + 1);
                                        return;
                                }
                        }
                }
                writeln(-1);
        }        
}