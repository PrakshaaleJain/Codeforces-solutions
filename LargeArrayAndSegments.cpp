#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i, n) for (int i = 0; i < int(n); ++i)
const int MAX=1e9+7;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    ios::sync_with_stdio(false);  
    cin.tie(nullptr); 
    
    int t;
    cin >> t;
    
    while(t--){
        lli n, k, x;
        cin >> n >> k >> x;
        vector<lli> arr(n);
        forn(i, n)cin >> arr[i];
        
        lli S = 0;
        vector<lli> b(n+1, 0);
        for (lli i = 0; i < n; i++){
            S += arr[i];
            b[i+1] = S;
        }
        
        if(x == 0){
            cout << n * k << "\n";
            continue;
        }
        
        if(S * k < x){
            cout << 0 << "\n";
            continue;
        }

        lli tot = k * S;
        lli limit = tot - x; 



        lli ans = 0;
        forn(i, n){ 
            if(limit < b[i]) continue;
            lli validT = (limit - b[i]) / S + 1;
            if(validT > k) validT = k;
            ans += validT;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
