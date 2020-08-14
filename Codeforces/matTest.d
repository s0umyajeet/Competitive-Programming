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
                int m = cin.readInt;
                int[][] mat = new int[][](n, m) = -1;
                //int[][] mat = new int[n, n];
                // foreach (ref i; mat) i = [1];
                foreach (i; mat) {
                        foreach (j; i) {
                                write(j, " ");
                        }
                        writeln();
                }
        }        
}