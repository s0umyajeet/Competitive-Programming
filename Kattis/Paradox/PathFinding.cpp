#include <bits/stdc++.h>
using namespace std;
#define int long long 
//handles cases for 64 bit integers by replacing int data types
//with long long data type at preprocessing stage
//comment line 3 for memory optimization

int FindPath(const int nStartX, const int nStartY, 
             const int nTargetX, const int nTargetY, 
             const unsigned char* pMap, const int nMapWidth, const int nMapHeight, 
             int *pOutBuffer, const int nOutBufferSize) {
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

        //starting and ending coordinates for finding shortest path
        int startX, startY, endX, endY;
        cin >> startX >> startY >> endX >> endY;

        //store return value of the FindPath function
        int ShortestPathLength;

        //call the function to find the shortest path
        ShortestPathLength = FindPath(startX, startY, endX, endY, pMap, 
                                      Rows, Cols, pOutBuffer, nOutBufferSize); 

        cout << "Length of the shortest path between the points (";
        cout << startX << ", " << startY;
        cout << ") and (";
        cout << endX << ", " << endY << ") is: " << ShortestPathLength << endl;

        cout << "The path is: " << endl;
        for (int i = 0; i < nOutBufferSize; i++) {
                cout << pOutBuffer[i] << " ";
        }
        cout << endl;                        
}