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

int count_substr(char[] s, char[] sample) {
        int count = 0;
        for (int i = 0; i < s.length - sample.length + 1; i++) {
                if (s[i..i + sample.length] == sample) {
                        count++; 
                }
        }
        return count;
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                char[] s = cin.read_string.dup;

                int l = s.length;
                int maxx = -999;
                for (int i = l - 1; i >= 1; i--) {
                        for (int j = 0; j < l - i + 1; j++) {
                                int c = count_substr(s, s[j..j + i]); 
                                if (c >= 2) {
                                        writeln(i);
                                        return;
                                }
                        }
                }
                writeln(0);
        }        
}