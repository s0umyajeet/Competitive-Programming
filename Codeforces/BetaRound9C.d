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
                while (tk.empty) 
                        tk = readln.split;
                auto tkt = tk.front;
                tk.popFront;
                return tkt;
        }
        int read_int() { 
                return read_string.to!int; 
        }
        double read_double() { 
                return read_string.to!double; 
        }
        string[] tk;
}

char[] dec_to_binary(int n) {
        char[] s;
        while (n > 0) {
                s ~= (n & 1) + 48;
                n >>= 1;               
        }
        reverse(s);
        return s;
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                int count = 0;
                for (int i = 1; i < (1 << 10); i++) {
                        if (dec_to_binary(i).to!long <= n) {
                                count++;
                        } else break;
                }
                writeln(count);
        }        
}