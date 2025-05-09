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
        int n,k;
        cin >> n >> k;

        vector<int> arr(n);
        forn(i,n)
            cin >> arr[i];

        int mini =INT_MAX, maxi = INT_MIN;
        forn(i,n){
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }

        int mex = -1;
        for(int i = 0; i < n; i++){
            
        }
    }
    
    return 0;
}
