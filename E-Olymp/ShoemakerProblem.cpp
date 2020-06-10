#include <bits/stdc++.h>
using namespace std;
 
struct Node{
        int no;
        double day, fine;
        double price; 
        friend bool operator <(const Node &a, const Node &b) {
                if(a.price != b.price) return a.price > b.price;
                return a.no < b.no;
        }
}arr[1005];
 
int main(){
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                
                for(int i = 0; i < n; i++) {
                        arr[i].no = i + 1;
                        cin >> arr[i].day >> arr[i].fine;
                        arr[i].price = arr[i].fine / arr[i].day;
                }
  
                sort(arr, arr + n);
  
                for(int i = 0; i < n; i++)
                        if(i) cout << arr[i].no << " ";
                        else cout << arr[i].no;
                
                cout << endl;
                
                if(t) cout << endl;
    }
    return 0;
}