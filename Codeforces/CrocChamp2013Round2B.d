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

void step(ref int i, int k, ref char[] arr) {
        for (int j = 1; j <= k; j++) {
                if (arr[i + k] == '.') {
                        i += k;
                        return;
                }
        }
}


void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                int n = cin.readInt;
                int k = cin.readInt;
                char[] arr = new char[n];
                arr = cin.readString.dup;
                
                int i = 0;
                bool possible = false;
                while (i != n - 1) {
                        writeln(i);
                        step(i, k, arr);
                        for (int j = 1; j <= k; j++) {
                                if (arr[i + j] == '.') {
                                        i += j;
                                        break;
                                        possible = true;
                                }
                        }
                        if (!possible) {
                                writeln("NO");
                                return;
                        }
                }
                writeln("YES");
        }        
}