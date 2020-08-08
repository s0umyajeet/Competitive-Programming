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
                int m = cin.read_int;
                
                char c;
                char[3] colors = ['M', 'C', 'Y'];
                bool bnw = true;

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                readf(" %s", c);
                                if (canFind(colors[0..3], c)) bnw = false; 
                        }
                }
                if (bnw) writeln("#Black&White");
                else writeln("#Color");
        }        
}