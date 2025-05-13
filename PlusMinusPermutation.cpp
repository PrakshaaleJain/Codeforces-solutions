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
        lli n,x,y;
        cin >> n >> x >> y;

        if(y==x){
            cout << 0 << endl;
            continue;
        }

        lli l = x / __gcd(x,y) * y;
        lli totalX  = n / x;
        lli totalY  = n / y;
        lli totalXY = n / l;
        lli cntX = totalX - totalXY;
        lli cntY = totalY - totalXY;
        
        // for(int i = x; i <= n; i+=x){
            
        //     if(i%y != 0){
            //         a[i-1] = maxi;
            //         maxi--;
            //     }
            //     else{
                //         a[i-1] = avg;
                //         avg++;
                //     }
                // }
        vector<lli> a(n,0);
        lli high = n;
        for (lli i = x; i <= n; i += x) {
            if (i % y != 0) {
                a[i-1] = high--;
            }
        }

        // for(int i = y; i <= n; i+=y){
            
        //     if(i%x != 0){
        //         a[i-1] = mini;
        //         mini++;
        //     }
        //     else continue;
        // }

        lli low = 1;
        for (lli i = y; i <= n; i += y) {
            if (i % x != 0) {
                a[i-1] = low++;
            }
        }


        lli mid = low; 
        for (lli i = l; i <= n; i += l) {
            a[i-1] = mid++;
        }

        // int ans = 0;
        // for(int i = 0; i < n; i++){
        //     if((i+1)%y == 0)
        //         ans -= a[i];
        //     else    ans += a[i];
        // }

        lli ans = 0;
        for (int i = 0; i < n; i++){
            if ((i+1) % y == 0) 
                ans -= a[i];
            else 
                ans += a[i];
        }

        cout << ans << endl;


    }

    
    return 0;
}
