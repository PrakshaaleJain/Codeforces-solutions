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

    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr); 
    
    int  t;
    cin >> t;

    while(t--){
        int x,n;
        cin >> x >> n;
        
        int ans = 1;
        for(int i = 1; i*i <= x; i++){
            if(x%i == 0){
                if(n <= i)      ans = max(ans, x/i);
                if(n <= x/i)    ans = max(ans, i);
            }
        }

        cout << ans << endl;






    }
    
    return 0;
}
