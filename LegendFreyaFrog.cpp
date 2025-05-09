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
        int x,y,k;
        cin >> x >> y >> k;

        // int steps = 0;
        // steps += ceil((float)x/k);
        // steps += ceil((float)y/k);

        // steps += abs(ceil((float)x/k) - ceil((float)y/k));
        // cout << steps << endl;

        cout << max(2*((x+k-1)/k) - 1,  2*((y+k-1)/k)) << endl;

        // print(max(2*((x+k-1)/k)-1,2*((y+k-1)/k)))


    }
    
    return 0;
}
