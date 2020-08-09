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
        
        string[] tokens;
}

void main() {
        IO cin;
        int t = 1;
        // int t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                char[][] mat = new char[][n];
                
                int comb = 0;
                //row-major traversal
                for (int i = 0; i < n; i++) {
                        int count = 0;  
                        mat[i] = new char[n];
                        mat[i] = cin.read_string.dup;
                        for (int j = 0; j < n; j++) {
                                if (mat[i][j] == 'C') count++;
                        }
                        comb += (count * (count - 1)) / 2;
                }

                //column-major traversal
                for (int i = 0; i < n; i++) {
                        int count = 0;
                        for (int j = 0; j < n; j++) {
                                if (mat[j][i] == 'C') count++;
                        }
                        comb += (count * (count - 1)) / 2;
                }

                writeln(comb);
        }        
}