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
                int d1 = cin.read_int;
                int d2 = cin.read_int;
                int d3 = cin.read_int;

                int route1 = d1 + d2 + d3;
                int route2 = 2 * d1 + 2 * d2;
                int route3 = 2 * d1 + 2 * d3;
                int route4 = 2 * d2 + 2 * d3;

                writeln(min(route1, route2, route3, route4));
        }        
}