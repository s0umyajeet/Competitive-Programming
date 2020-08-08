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
                string s = cin.read_string;
                if (s[indexOf(s, '.') - 1] == '9') {
                        writeln("GOTO Vasilisa.");
                } else {
                        int loc_of_dot = indexOf(s, '.');
                        if (s[loc_of_dot + 1] < '5') {
                                for (int i = 0; i < loc_of_dot; i++) {
                                        write(s[i]);
                                }
                                writeln();
                        } else {
                                for (int i = 0; i < loc_of_dot - 1; i++) {
                                        write(s[i]);
                                }
                                write(s[loc_of_dot - 1] - 47);
                                writeln();
                        }
                } 
        }        
}