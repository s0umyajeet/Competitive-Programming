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

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int n, m;
                cin >> n >> m;

                vector<vector<char>> v(n, vector<char>(m, '.'));
                
                int min_i = 99;
                int min_j = 99;
                int max_i = -1;
                int max_j = -1;

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cin >> v[i][j];
                                if (v[i][j] == '*') {
                                        min_i = min(min_i, i);
                                        min_j = min(min_j, j);
                                        max_i = max(max_i, i);
                                        max_j = max(max_j, j); 
                                }
                        }
                }

                for (int i = min_i; i <= max_i; i++) {
                        for (int j = min_j; j <= max_j; j++) {
                                cout << v[i][j];
                        }
                        cout << endl;
                }         
        }
        return 0;
}