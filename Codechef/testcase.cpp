#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
        srand(time(NULL));
        int n;
        n = rand() % 10;
        vector<int> initial;
        vector<int> final;

        fstream inputFile;
        inputFile.open("TupleInputFile.txt", ios::out);
        inputFile << n << endl;
        
        while (n--) {
                unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();
                for (int i = 0; i < 3; i++) {
                        mt19937 r1(seed1);
                        initial.push_back(r1() % 10);
                        final.push_back(r1() % 10);
                }

                for (int i = 0; i < 3; i++) {
                        inputFile << initial[i] << " ";
                }
        
                inputFile << endl;
        
                for (int i = 0; i < 3; i++) {
                        inputFile << final[i] << " ";
                }
        
                inputFile << endl;
        }
        return 0;
}