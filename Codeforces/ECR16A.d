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
                char[2] pos = cin.read_string.dup;
                int x = pos[0] - 'a';
                int y = pos[1] - '0';
                y--;
                int count = 0;
                
                for (int i = -1; i <= 1; i++) {
                        for (int j = -1; j <= 1; j++) {
                                if (x + i < 8 && x + i >= 0 && y + j >= 0 && y - j < 8)
                                    count++;
                        }
                }
                writeln(count - 1);
        }        
}