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
                string s = cin.read_string;
                int[] groups;
                for (int i = 0; i < s.length; i++) {
                        if (s[i] == 'B') {
                                int j = i;
                                int count = 0;
                                while (j < s.length && s[j] == 'B') {
                                        count++;
                                        j++;
                                }
                                i = j - 1;
                                groups ~= count;
                        }
                }
                writeln(groups.length);
                foreach(i; groups) {
                        write(i, " ");
                }
        }                       
}