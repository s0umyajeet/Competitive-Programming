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

int a, b, n, m;
int[][] mat;

void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                n = cin.readInt;
                m = cin.readInt;
                mat = new int[][](n, m);
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                mat[i][j] = cin.readInt;
                        }
                }
                a = cin.readInt;
                b = cin.readInt;
                if (a == b) writeln(colWise());
                else writeln(min(colWise(), rowWise()));
        }        
}

int colWise() {
        int minn = 99999999;
        for (int i = 0; i < n - b + 1; i++) {
                for (int j = 0; j < m - a + 1; j++) {
                        int trees = 0;
                        for (int dx = 0; dx < b; dx++) {
                                for (int dy = 0; dy < a; dy++) {
                                        if (mat[i + dx][j + dy]) trees++;
                                }
                        }
                        minn = min(minn, trees);
                }
        }
        return minn;
}

int rowWise() {
        int minn = 99999999;
        for (int i = 0; i < n - a + 1; i++) {
                for (int j = 0; j < m - b + 1; j++) {
                        int trees = 0;
                        for (int dx = 0; dx < a; dx++) {
                                for (int dy = 0; dy < b; dy++) {
                                        if (mat[i + dx][j + dy]) trees++;
                                }
                        }
                        minn = min(minn, trees);
                }
        }
        return minn;
}