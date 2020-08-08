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
                int w = 0;
                int l = 0;

                int n = cin.read_int;
                int c = cin.read_int;

                int[] sc = new int[n];
                int[] ti = new int[n];
                
                foreach (ref x; sc) x = cin.read_int;
                foreach (ref x; ti) x = cin.read_int;

                for (int i = 0; i < n; i++) {
                        l += max(0, sc[i] - sum(ti[0..i + 1]) * c);
                }

                for (int i = n - 1; i >= 0; i--) {
                        w += max(0, sc[i] - sum(ti[i..n]) * c);
                }

                if (l > w) writeln("Limak");
                else if (l < w) writeln("Radewoosh");
                else writeln("Tie");
        }        
}