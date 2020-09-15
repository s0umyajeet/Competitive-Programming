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
                int n = cin.readInt;
                int k = cin.readInt;
                int[] arr = new int[n];
                int[101] count = 0;
                foreach (ref i; arr) {
                        i = cin.readInt;
                        count[i]++;
                }

                int level = 0;
                while (count[k] != n) {
                        auto temp = count.dup;
                        for (int i = 0; i < k; i++) {
                                if (temp[i]) {
                                        count[i]--;
                                        count[i + 1]++;
                                }
                        }
                        level++;
                }
                writeln(level);
	}    
}