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
                string s = cin.read_string;

                for (int i = 0; i < s.length; i++) {
                        if (s[i] == '4' || s[i] == '7') {
                                continue;
                        } else {
                                writeln("NO");
                                return;
                        }
                }

                if (sum(s[0..n / 2]) == sum(s[n / 2..n])) {
                        writeln("YES");
                } else writeln("NO");
        }        
}