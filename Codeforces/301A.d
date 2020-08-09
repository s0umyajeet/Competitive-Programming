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
                int n = cin.read_int;
                string s = cin.read_string;
                string code = cin.read_string;
                int ans = 0;
                for (int i = 0; i < n; i++) {
                        int met1 = min(s[i], code[i]) + 10 - max(s[i], code[i]);
                        int met2 = abs(code[i] - s[i]);
                        ans += min(met1, met2);
                }
                writeln(ans);
        }        
}