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
        string readString() {
                while (tk.empty) 
                        tk = readln.split;
                auto tkt = tk.front;
                tk.popFront;
                return tkt;
        }
        int readInt() { 
                return readString.to!int; 
        }
        double readDouble() { 
                return readString.to!double; 
        }
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                int n = cin.readInt;
                int[] arr = new int[n];
                foreach (ref i; arr) i = cin.readInt;
                bool possible = false;
                for (int i = 0; i < n; i++) {
                        if (arr.canFind(arr[i] + 1) && arr.canFind(arr[i] - 1)) 
                                possible = true;
                }
                writeln(possible ? "YES" : "NO");
        }        
}