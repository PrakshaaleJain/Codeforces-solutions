#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif
    
    int  t;
    cin >> t;

    while(t--){
        int n,x ,y;
        cin >> n >> x >> y;

        int d = 1;
        while(d <= n){
            vector<int> v;
            if(d == x)
                v.pb(y);
            else if(d == y)
                v.pb(x);
            
            if(d == 1 && x != n || y != n)
                v.pb(n); 
            else if(d == n && x != 1 || y != 1)
                v.pb(1);
            x`  




            

        }

    }
    
    return 0;
}
