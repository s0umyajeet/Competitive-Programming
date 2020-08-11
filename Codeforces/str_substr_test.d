import std.string;
import std.algorithm;
import std.stdio;
import std.range;
import std.conv;

struct IO {
        string[] tk;
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
}

void main() {
        char[] s = "Hello world".dup;
        writeln(s[0..2]);
}