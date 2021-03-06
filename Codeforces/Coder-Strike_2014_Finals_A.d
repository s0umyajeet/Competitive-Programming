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
        int n_Cases = 1;
        // n_Cases = cin.readInt;
        
	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                char[] s = cin.readString.dup;
                char[] r = "AHIMOTUVWXY".dup;
                foreach (i; s) {
                        if (!r.canFind(i)) {
                                writeln("NO");
                                return;
                        }
                }
                writeln(s.dup.reverse == s.dup ? "YES" : "NO");
	}    
}