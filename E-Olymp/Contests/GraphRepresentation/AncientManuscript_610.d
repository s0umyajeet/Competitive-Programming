module _template;
import std.algorithm;
import std.stdio;

void main() {
        int n;
        readf(" %s", &n);

        int input;
        int roads = 0;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        readf(" %s", &input);
                        if (i > j && input == 1) {
                                roads++;
                        }
                }
        } 
        writeln(roads);
}