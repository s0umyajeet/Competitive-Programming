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
        
        int t;
        cin >> t;

        while(t--) {
                int n;
                cin >> n;
                string s;
                cin >> s;
                int count = 0;

                set<int> pos;
                vector<int> p;
                int k = 0;
                map<int, int> m;
                while (pos.size() < s.size()) {
                        k++;
                        string sample;
                        char c;
                        int x = -1;
                        for (int i = 0; i < s.size(); i++) {
                                if (pos.find(i) == pos.end()) {
                                        x = i;
                                        break;
                                }
                        }
                        c = s[x];
                        sample += s[x];
                        pos.insert(x);
                        m[x] = k;
                        for (int i = 0; i < s.size(); i++) {
                                if (s[i] != c && pos.find(i) == pos.end()) {
                                        sample += s[i];
                                        c = s[i];
                                        pos.insert(i);
                                        m[i] = k;
                                }
                        }
                        count++;
                        p.push_back(count);
                }
                cout << count << endl;
                for (auto itr = m.begin(); itr != m.end(); itr++) {
                        cout << itr->second << " ";
                }
                cout << endl;
        }
        return 0;
}



