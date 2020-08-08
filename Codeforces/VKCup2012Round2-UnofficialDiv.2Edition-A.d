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
                int a = cin.read_int;
                int b = cin.read_int;

                int[] v = new int[n];
                for (int i = 0; i < n; i++) {
                        v[i] = cin.read_int;
                }
                sort(v);
                writeln(v[b] - v[b - 1]);
        }        
}