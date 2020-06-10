/*
 * UVa: 10026 - Shoemaker's Problem
 * Result: Accept
 * Time: 0.008s
 * Author: D_Double
 */
#include<cstdio>
#include<algorithm>
using namespace std;
 
struct Node{
    int no;
    double day, fine;
    double price;
    friend bool operator <(const Node &a, const Node &b){
        if(a.price != b.price) return a.price>b.price;
        return a.no<b.no;
    }
}arr[1005];
 
int main(){
    int T, N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        for(int i=0; i<N; ++i){
            arr[i].no = i+1;
            scanf("%lf%lf", &arr[i].day, &arr[i].fine);
            arr[i].price = arr[i].fine/arr[i].day;
        }
        sort(arr, arr+N);
        for(int i=0; i<N; ++i)
            if(i) printf(" %d",arr[i].no);
            else printf("%d",arr[i].no);
        printf("\n");
        if(T) printf("\n");
    }
    return 0;
}