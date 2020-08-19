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

bool checkSubstring(string s1, string s2, int mode) {
        if (mode == 1) { //s1 is smaller than s2
                for (int i = 0; i < s1.length; i++) {
                        for (int j = i + 1; j <= s1.length; j++) {
                                if (canFind(s2, s1[i..j]))
                                        return true;
                        }
                }
                return false;
        } else if (mode == 2) {
                for (int i = 0; i < s2.length; i++) {
                        for (int j = i + 1; j <= s2.length; j++) {
                                if (canFind(s1, s2[i..j]))
                                        return true;
                        }
                }
                return false;
        } else {
                for (int i = 0; i < s1.length; i++) {
                        for (int j = i + 1; j <= s1.length; j++) {
                                if (canFind(s2, s1[i..j]))
                                        return true;
                        }
                }
                for (int i = 0; i < s2.length; i++) {
                        for (int j = i + 1; j <= s2.length; j++) {
                                if (canFind(s1, s2[i..j]))
                                        return true;
                        }
                }
                return false;
        }
}

void main() {
        IO cin;
        int t = 1;
        t = cin.readInt;
        while (t--) {
                string s1 = cin.readString;
                string s2 = cin.readString;

                if (s1.length < s2.length) 
                        writeln(checkSubstring(s1, s2, 1) ? "YES" : "NO");
                else if (s1.length > s2.length)
                        writeln(checkSubstring(s1, s2, 2) ? "YES" : "NO");
                else writeln(checkSubstring(s1, s2, 3) ? "YES" : "NO");
        }        
}