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

void main() {
        IO cin;
        int t = 1;
        // int t = cin.read_int;
        while (t--) {
                int n, m;
                n = cin.read_int;
                m = cin.read_int;

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                if (i % 2 == 0) {
                                        write("#");
                                } else {
                                        if (i % 4 == 1) {
                                                if (j < m - 1) write(".");
                                                else write("#");
                                        } else {
                                                if (j == 0) write("#");
                                                else write(".");
                                        }
                                }
                        }
                        writeln();
                }
        }        
}