#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;


int32_t main()
{
    fast ;
    int t ;
    cin >> t ;
    
    while(t--) {
        int ts , cnt{0};
        cin >> ts ;
        
        if(ts % 2 == 0) {
            while(ts % 2 != 1) {
                ts = ts / 2 ;
            }    
        } 

        for(int i = 2 ; i <= ts ; i += 2) {
            cnt++ ;
        }
        cout << cnt << endl;     
    }
   
}