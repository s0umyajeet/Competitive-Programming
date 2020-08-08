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
                char[][] v = new char[][n];
                bool seat_found = false;
                for (int i = 0; i < n; i++) {
                        v[i] = new char[5];
                        v[i] = cin.read_string.dup;
                }

                for (int i = 0; i < n; i++) {
                        bool flag1 = (v[i][0] == 'O' && v[i][1] == 'O');
                        bool flag2 = (v[i][3] == 'O' && v[i][4] == 'O');  
                        if (!seat_found && flag1) {
                                seat_found = true;
                                v[i][0] = '+';
                                v[i][1] = '+';
                        } else if (!seat_found && flag2) {
                                seat_found = true;
                                v[i][3] = '+';
                                v[i][4] = '+';
                        }
                }

                if (!seat_found) writeln("NO");
                else {
                        writeln("YES");
                        foreach (i; v) {
                                foreach(j; i) 
                                        write(j);
                                writeln();
                        }
                }
        }        
}