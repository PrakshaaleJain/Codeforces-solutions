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
        int n;
        cin >> n;

        int res = 0;
        vector < lli > v(n+1,0), pos(n+1,0);
        for(lli i = 1 ; i <= n ; i++) {
            cin>>v[i];
            pos[v[i]] = i;
        }
 
        for(lli i = 2; i <= n ; i++) {
            if(pos[i-1] > pos[i]) {
                res++;
            }
        }
        cout<<res<<endl;
        
        
    }
    
    return 0;
}
