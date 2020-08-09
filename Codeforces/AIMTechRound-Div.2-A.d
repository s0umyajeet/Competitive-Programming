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
                double d = cin.read_double;
                double L = cin.read_double;
                double v1 = cin.read_double;
                double v2 = cin.read_double;

                double rel_vel = v1 + v2;
                double dist = L - d;
                writefln("%.*f", 18, (dist) / (rel_vel));
        }        
}