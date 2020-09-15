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
        string readString() {
                while (tk.empty) 
                        tk = readln.split;
                auto tkt = tk.front;
                tk.popFront;
                return tkt;
        }
        int readInt() { 
                return readString.to!int; 
        }
        double readDouble() { 
                return readString.to!double; 
        }
}

void main() {
        IO cin;
        int n_Cases = 1;
        // n_Cases = cin.readInt;
        
	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                char[] s = cin.readString.dup;
 
                if (s.length == 1 && s[0] >= 97) s[0] -= 32;
                else if (s[0] >= 'a') {
                        bool fail = false;
                        for (int i = 1; i < s.length; i++) {
                                if (s[i] >= 'a') {
                                        fail = true;
                                        break;
                                }
                        }
                        if (!fail) s = capitalize(s);
                } else {
                        bool allCapital = true;
                        for (int i = 0; i < s.length; i++) {
                                if (s[i] >= 97) {
                                        allCapital = false;
                                        break;
                                }
                        }
                        if (allCapital && s.length > 1) s = toLower(s);
                        else if (allCapital && s.length == 1) s[0] += 32;
                }
                writeln(s);
	}    
}