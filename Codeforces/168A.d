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
int[][] mat = new int[][](3, 3);
void toggle(int i, int j) {
        mat[i][j] = mat[i][j] == 1 ? 0 : 1;
        if (i + 1 < 3) mat[i + 1][j] = mat[i + 1][j] == 1 ? 0 : 1;
        if (j + 1 < 3) mat[i][j + 1] = mat[i][j + 1] == 1 ? 0 : 1;
        if (i - 1 >= 0) mat[i - 1][j] = mat[i - 1][j] == 1 ? 0 : 1;
        if (j - 1 >= 0) mat[i][j - 1] = mat[i][j - 1] == 1 ? 0 : 1;
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                int[][] state = new int[][](3, 3);
                for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                                mat[i][j] = 1;
                        }
                }

                foreach (ref i; state) foreach (ref j; i) j = cin.readInt;

                for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                                if (state[i][j] % 2) {
                                        toggle(i, j);
                                }
                        }
                }

                foreach (i; mat) {
                        foreach (j; i) {
                                write(j);
                        }
                        writeln();
                }
        }        
}