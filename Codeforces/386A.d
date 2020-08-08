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
                int a = cin.read_int;
                int b = cin.read_int;
                int c = cin.read_int;

                while (1) {
                        if (a * 2 <= b && a * 4 <= c) {
                                break;
                        } else a--;
                }
                writeln(a + a * 2 + a * 4);
                
        }        
}