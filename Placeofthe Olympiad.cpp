#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i,n) for(int i = 0; i < n; i++)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif
    
    int  t;
    cin >> t;

    while(t--){
        lli n,m,k;
        cin >> n >> m >> k;        

        // int single_row_k = k/n;
        // if(k%n) single_row_k++;

        // int ans = 0;
        // ans += ceil(single_row_k/2) + 1;

        // cout << ans << endl;

        // int max_desk_in_single_row = k/n + ceil((k%n)/n);
        // cout << ceil(max_desk_in_single_row/m) << endl;

        int l = 0, r = m;
        
        while( l + 1 < r){
            lli mid = (r-l)/2 + l;
            if((m/(mid+1) *  mid + m % (mid+1)) *n >= k)    
                r = mid;
            else
                l = mid;
        }

        cout << r << endl;
        
        


    }
    
    return 0;
}