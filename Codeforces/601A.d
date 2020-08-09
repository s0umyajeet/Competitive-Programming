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
        t = cin.read_int;
        while (t--) {
                int a = cin.read_int;
                int b = cin.read_int;

                a = max(a, b);
                b = min(a, b);

                int count = 0;
                bool done = false;
                
                while (a > b) {
                        while (a >= 5) {
                                if (a == b) {
                                        done = true;
                                        break;
                                }
                                a -= 5;
                                count++;
                        }

                        if (done) break;

                        while (a >= 2) {
                                if (a == b) {
                                        done = true;
                                        break;
                                }
                                a -= 2;
                                count++;
                        }

                        if (done) break;

                        while (a >= 1) {
                                if (a == b) {
                                        done = true;
                                        break;
                                }
                                a--;
                                count++;
                        }

                        if (done) break;
                }
                writeln(count);                        
        }        
}