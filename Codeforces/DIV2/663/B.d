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

        double read_double() {
                return read_string.to!double;
        }
        
        string[] tokens;
}


bool check (ref int[][] mat, int i, int j) {
        while (mat[i][j] != 'C') {
                if (mat[i][j] == 

void main() {
        IO cin;
        int t = 1;
        t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                int m = cin.read_int;
                char[][] mat = new char[][](n, m);

                for (int i = 0; i < n; i++) {
                        mat[i] = cin.read_string.dup;
                }
                writeln(count);

        }        
}