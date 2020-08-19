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

                char[][] mat = new char[][](n, m);
                for (int i = 0; i < n; i++) {
                        mat[i] = cin.readString.dup;
                }
                int[][] count_cc = new int[][](n, m);
                int q = cin.readInt;
                while (q--) {
                        int x1, y1, x2, y2;
                        x1 = cin.readInt;
                        y1 = cin.readInt;
                        x2 = cin.readInt;
                        y2 = cin.readInt;
                        for (int i = x1 - 1; i <= x2 - 1; i++) {
                                for (int j = y1 - 1; j <= y2 - 1; j++) {
                                        count_cc[i][j]++;
                                }
                        }
                }
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                if (count_cc[i][j] & 1) {
                                        if (mat[i][j] == '0') mat[i][j] = '1';
                                        else mat[i][j] = '0';
                                }
                        }
                }
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                write(mat[i][j]);
                        }
                        writeln();
                }
        }        
}