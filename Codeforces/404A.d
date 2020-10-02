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
        IO cin;s
        int n_Cases = 1;
        // n_Cases = cin.readInt;
        
	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                int n = cin.readInt;
                char[][] mat = new char[][](n, n);

                for (int i = 0; i < n; i++) {
                        mat[i] = cin.readString.dup;
                }

                char key = mat[0][0];
                char key2 = mat[0][1];

                bool con1 = true;
                bool con2 = true;

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                if (i == j || i + j == n - 1) {
                                        if (mat[i][j] != key) con1 = false;
                                } else {
                                        if (mat[i][j] == key || mat[i][j] != key2) con2 = false;
                                }
                        }
                }

                writeln((con1 && con2) ? "YES" : "NO");
	}    
}