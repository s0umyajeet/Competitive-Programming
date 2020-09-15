#include <iostream>
#include <vector>
#include <set>
#include <utility>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> Dijkstra(const vector<vector<pair<int, int>>> &adj, int nMapWidth, int nMapHeight, int startVertex, int endVertex);

int FindPath(const int nStartX, const int nStartY, const int nTargetX, const int nTargetY, const unsigned char* pMap, const int nMapWidth, const int nMapHeight, int *pOutBuffer, const int nOutBufferSize) 
{
        //starting vertex in the map
        int startVertex = nMapWidth * nStartY + nStartX;
        //Target vertex in the map
        int endVertex = nMapWidth * nTargetY + nTargetX;

        //starting and ending points on the map are same
        if (startVertex == endVertex) {
                return 0;
        }
        //Create a (n X m) matrix for from the given map
        vector<vector<int>> mapMatrix(nMapWidth, vector<int>(nMapHeight, 0));
        for (int i = 0; i < nMapWidth; i++) {
                for (int j = 0; j < nMapHeight; j++) {
                        mapMatrix[i][j] = pMap[i * nMapWidth + j] - '0';
                }
        }

        //adjacency matrix for the given map, stores pair of integers at each valid (i, j)
        //pair.first = weight of the edge
        //pair.second = target index
        vector<vector<pair<int, int>>> adj(nMapWidth * nMapHeight);

        //Creating entries for the adjacency matrix
        for (int i = 0; i < nMapHeight; i++) {
                for (int j = 0; j < nMapWidth; j++) {
                        //For each index in the map check which neighbors are visitable and 
                        //add them to the adjacency list for that vertex
                        int currVertex = nMapWidth * i + j;
                        if (i - 1 >= 0) {
                                if (mapMatrix[i - 1][j] == 1) {    //visitable
                                        int targetVertex = (i - 1) * nMapWidth + j;
                                        adj[currVertex].push_back({1, targetVertex});
                                }
                        } 
                        if (i + 1 < nMapWidth) {
                                if (mapMatrix[i + 1][j] == 1) {    //visitable
                                        int targetVertex = (i + 1) * nMapWidth + j;
                                        adj[currVertex].push_back({1, targetVertex});
                                }
                        }
                        if (j - 1 >= 0) {
                                if (mapMatrix[i][j - 1] == 1) {    //visitable
                                        int targetVertex = i * nMapWidth + (j - 1);
                                        adj[currVertex].push_back({1, targetVertex});
                                }
                        }
                        if (j + 1 >= 0) {
                                if (mapMatrix[i][j + 1] == 1) {    //visitable
                                        int targetVertex = i * nMapWidth + (j + 1);
                                        adj[currVertex].push_back({1, targetVertex});
                                }
                        }
                }
        }
        
        //Calling the Dijksta's algorithm for finding the shortest path
        vector<int> shortestPath = Dijkstra(adj, nMapWidth, nMapHeight, startVertex, endVertex);


        if (shortestPath.size() == 0) return -1; //no path found
        else {
                reverse(shortestPath.begin(), shortestPath.end());
                for (int i = 0; i < shortestPath.size(); i++) {
                        pOutBuffer[i] = shortestPath[i];
                }
                shortestPath.push_back(nOutBufferSize);
                cout << sizeof (pOutBuffer) << endl;
                for (int i = 0; i < sizeof(pOutBuffer); i++) {
                        cout << pOutBuffer[i] << " ";
                }
                return shortestPath.size() - 1;
        }
}

//Dijkstra's algorithm for finding the shortest path between two nodes in a graph
vector<int> Dijkstra(const vector<vector<pair<int, int>>> &adj, int nMapWidth, int nMapHeight, int startVertex, int endVertex) 
{
        int n = nMapWidth * nMapHeight;
        
        //a queue for processing vertices
	set<pair<int, int>> Q;          

        //shortest distance of each vertex from the starting vertex
	vector<int> dist(n, INT_MAX);   

        //predecessor of each vertex in the shortest path
	vector<int> parent(n, -1);      

        //distance of the starting vertex from itself is 0
	dist[startVertex] = 0;          

        //Push the starting node into the queue
	Q.insert({0, startVertex});

        //while the queue is not empty process each adjacent node
	while (!Q.empty()) {
		auto top = Q.begin();
		int vertex = top->second;
		Q.erase(top);
		if (vertex == n) return vector<int> ();

		for (auto v : adj[vertex]) {
			int to = v.second;
			int w = v.first;
			if (dist[vertex] + w < dist[to]) {
				Q.erase({dist[to], to});
				dist[to] = dist[vertex] + w;
				Q.insert({dist[to], to});
				parent[to] = vertex;
			}
		}
	}

        //if dist of the target vertex is infinity, it means there is no path to it
        //hence return empty path vector
	if (dist[endVertex] == INT_MAX) return vector<int>();
	else {
		//will store the shortest path from start to finish vertices
                vector<int> path;

                //starting from the end vertex constructing the path by going to its predecessor
		for (auto v = endVertex; v != startVertex; v = parent[v]) path.push_back(v);
		return path;
	}
}

int32_t main() {
        //Number of rows and cols for the map
        int Rows, Cols;
        cout << "Enter the number of rows in the map: ";
        cin >> Rows;
        cout << "Enter the number of columns in the map: ";
        cin >> Cols;
   
        //create map
        unsigned char pMap[Rows * Cols];
        
        cout << "Enter the contents of the map (space separated): ";
        //input for the map
        for (int i = 0; i < Rows * Cols; i++) {
                cin >> pMap[i];
        }

        //Ouput buffer size
        int nOutBufferSize;
        cout << "Enter ouput buffer size: ";
        cin >> nOutBufferSize;

        //Create output buffer for indices of shortest path
        int pOutBuffer[nOutBufferSize];

        cout <<"Enter the coordinates of the starting and ending points respectively (x1, y1, x2, y2): ";
        //starting and ending coordinates for finding shortest path
        int startX, startY, endX, endY;
        cin >> startX >> startY >> endX >> endY;

        //store return value of the FindPath function
        int ShortestPathLength;

        ShortestPathLength = FindPath(startX, startY, endX, endY, pMap, Rows, Cols, pOutBuffer, nOutBufferSize); 


        if (ShortestPathLength == -1) { //no path exists
                cout << "No path found" << endl;
        } else {
                cout << "Length of the shortest path between the points (";
                cout << startX << ", " << startY;
                cout << ") and (";
                cout << endX << ", " << endY << ") is: " << ShortestPathLength << endl;

                if (ShortestPathLength > 0) {
                        cout << "The path is: ";
                        for (int i = 0; i < ShortestPathLength; i++) {
                                cout << pOutBuffer[i] << " ";
                        }
                        cout << endl;                  
                }
        }      
}