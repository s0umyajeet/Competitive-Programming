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
                int a = cin.read_int;
                int b = cin.read_int;
                int n = cin.read_int;

                int turn = 0;
                while (1) {
                        if (turn % 2 == 0) {
                                if (n >= gcd(n, a)) {
                                        n -= gcd(n, a);
                                } else {
                                        writeln(1);
                                        return;
                                }
                        } else {
                                if (n >= gcd(n, b)) {
                                        n -= gcd(n, b);
                                } else {
                                        writeln(0);
                                        return;
                                }
                        }
                        turn++;
                }
        }        
}