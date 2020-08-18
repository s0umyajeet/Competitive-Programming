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
int n, m;
int countFaces(ref char[][] mat, int i, int j) {
        int[4] count;
        for (int dy = 0; dy < 2; dy++) {
                for (int dx = 0; dx < 2; dx++) {
                        if (mat[i + dy][j + dx] == 'f') count[0]++;
                        if (mat[i + dy][j + dx] == 'a') count[1]++;
                        if (mat[i + dy][j + dx] == 'c') count[2]++;
                        if (mat[i + dy][j + dx] == 'e') count[3]++;
                }
        }
        return (count[0] == 1 && count[1] == 1 && count[2] == 1 && count[3] == 1);
}
void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                n = cin.readInt;
                m = cin.readInt;
                char[][] mat = new char[][](n, m); 
                for (int i = 0; i < n; i++) {
                        mat[i] = cin.readString.dup;
                }
                if (n < 2 || m < 2) {
                        writeln(0);
                        return;
                }
                int count = 0;
                for (int i = 0; i <= n - 2; i++) {
                        for (int j = 0; j <= m - 2; j++) {
                                if (countFaces(mat, i, j)) count++;
                        }
                }
                writeln(count);
        }        
}