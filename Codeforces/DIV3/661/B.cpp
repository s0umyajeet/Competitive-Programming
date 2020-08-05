/*
           ;               ,           
         ,;                 '.         
        ;:                   :;        
       ::                     ::       
       ::                     ::       
       ':                     :        
        :.                    :        
     ;' ::                   ::  '     
    .'  ';                   ;'  '.    
   ::    :;                 ;:    ::   
   ;      :;.             ,;:     ::   
   :;      :;:           ,;"      ::   
   ::.      ':;  ..,.;  ;:'     ,.;:   
    "'"...   '::,::::: ;:   .;.;""'    
        '"""....;:::::;,;.;"""         
    .:::.....'"':::::::'",...;::::;.   
   ;:' '""'"";.,;:::::;.'""""""  ':;   
  ::'         ;::;:::;::..         :;  
 ::         ,;:::::::::::;:..       :: 
 ;'     ,;;:;::::::::::::::;";..    ':.
::     ;:"  ::::::"""'::::::  ":     ::
 :.    ::   ::::::;  :::::::   :     ; 
  ;    ::   :::::::  :::::::   :    ;  
   '   ::   ::::::....:::::'  ,:   '   
    '  ::    :::::::::::::"   ::       
       ::     ':::::::::"'    ::       
       ':       """""""'      ::       
        ::                   ;:        
        ':;                 ;:"        
          ';              ,;'          
            "'           '"            
              ' 
*/
#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

bool testArray(vector<int> &A) {
        set<int> str(A.begin(), A.end());
        if (str.size() > 1) return false;
        else return true;
}

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;

        while(t--) {
                int n;
                cin >> n;
                vector<int> A(n);
                vector<int> B(n);
                int min_A = 99999999;
                int min_B = 99999999;
                for (auto &x : A) {
                        cin >> x;
                        min_A = min(min_A, x);
                }
                for (auto &x : B) {
                        cin >> x;
                        min_B = min(min_B, x);
                }
                int count = 0;

                while (testArray(A) == false || testArray(B) == false) {
                        for (int i = 0; i < n; i++) {
                                if (A[i] > min_A && B[i] > min_B) {
                                        // cout << "A" << endl;
                                        int temp = min(abs(min_A - A[i]), abs(min_B - B[i])); 
                                        count += temp;
                                        A[i] -= temp;
                                        B[i] -= temp;
                                } else if (A[i] > min_A) {
                                        // cout << "B" << endl;
                                        count += abs(min_A - A[i]);
                                        A[i] -= abs(min_A - A[i]);
                                } else if (B[i] > min_B) {
                                        // cout << "C" << endl;
                                        count += abs(min_B - B[i]);
                                        B[i] -= abs(min_B - B[i]);
                                }
                        }
                }
                cout << count << endl;
        }
}