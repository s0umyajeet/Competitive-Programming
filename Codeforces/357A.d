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
                bool done = false;
                while (n--) {
                        string name = cin.read_string;
                        int prev_rating = cin.read_int;
                        int new_rating = cin.read_int;
                        if (prev_rating >= 2400 && new_rating > prev_rating) done = true;
                }
                if (done) writeln("YES");
                else writeln("NO");
        }        
}