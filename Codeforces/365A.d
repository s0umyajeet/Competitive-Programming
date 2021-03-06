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
                int c_a = 0;
                int c_b = 0;
                for (int i = 0; i < n; i++) {
                        int a = cin.read_int;
                        int b = cin.read_int;
                        if (a > b) c_a++;
                        if (b > a) c_b++;
                }
                if (c_a > c_b) writeln("Mishka");
                else if (c_b > c_a) writeln("Chris");
                else writeln("Friendship is magic!^^");
        }        
}