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

int n, m;

void bfs(ref int[][] adj, int start, ref int[] dist) {
        bool[] visited = new bool[n];
        visited[start - 1] = true;
        
        int[] q;
        q ~= start - 1;

        dist[start - 1] = 0;
        
        while (q.length > 0) {
                int v = q.front;
                q = q.remove(0);
                // write("Running ");
                foreach (u; adj[v]) {
                        if (!visited[u]) {
                                visited[u] = true;
                                dist[u] = min(dist[u], dist[v] + 1);
                                q ~= u;
                        }
                }
        }
}
 
void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                n = cin.read_int;
                m = cin.read_int;
                int[][] adj = new int[][](n);
                int[] dist = new int[n];

                for (int i = 0; i < n; i++) {
                        dist[i] = 999999999;
                }
                for (int i = 0; i < m; i++) {
                        int a = cin.read_int;
                        int b = cin.read_int;
                        adj[a - 1] ~= b - 1;
                        adj[b - 1] ~= a - 1;
                }

                int k = cin.read_int;
                for (int i = 0; i < k; i++) {
                        int s = cin.read_int;
                        bfs(adj, s, dist);
                }

                writeln(dist.maxElement);
                writeln(dist.maxIndex + 1);
        }        
}