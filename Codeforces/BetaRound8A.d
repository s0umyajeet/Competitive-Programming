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

        double read_double() {
                return read_string.to!double;
        }
        
        string[] tokens;
}

bool check(char[] f, char[] s1, char[] s2, int t) {
        if (t == 1) {
                swap(s1, s2);
        }

        bool flag1 = false;
        bool flag2 = false;

        for (int i = 0; i < f.length - s1.length; i++) {
                if (f[i..s1.length] == s1) flag1 = true;
        }

        for (int i = 0; i < f.length - s2.length; i++) {
                if (f[i..s2.length] == s2 && flag1) flag2 = true;
        }

        return (flag1 && flag2);
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                char[] f = cin.read_string.dup;
                char[] s1 = cin.read_string.dup;
                char[] s2 = cin.read_string.dup;

                bool for1 = false;
                bool back1 = false;

                if (check(f, s1, s2, 0)) for1 = true;
                if (check(reverse(f), s1, s2, 1)) back1 = true;

                if (for1 && back1) writeln("both");
                if (for1 && !back1) writeln("forward");
                if (!for1 && back1) writeln("backward");
                if (!for1 && !back1) writeln("fantasy");
        }        
}