module _template;
import std.stdio;
import std.algorithm;
import std.container;
import std.range;
import std.numeric;
import std.conv;
import std.typecons;
import std.format;

struct IO {
        string read_string() {
                while (tokens.empty) {
                tokens = readln.split;
        }
        auto token = tokens.front;
                tokens.popFront;
                return token;
        }
        
        int read_int() {
                return read_string.to!int;
        }
        
        string[] tokens;
}

void main() {
        IO cin;
        int t = 1;
        // int t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                int[][] mat = new int[][n];
                int sum = 0;
                for (int i = 0; i < n; i++) {
                        mat[i] = new int[n];
                        for (int j = 0; j < n; j++) {
                                mat[i][j] = cin.read_int;
                                if (i == j || i + j == n - 1 || i == n / 2 || j == n / 2) {
                                        sum += mat[i][j];
                                }
                        }
                }
                writeln(sum);
        }        
}