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
        int x;
        cin >> x;

        // int a = (n%2 == 0) ? n-1 : n-2;
        // int b = a ^ n;

        // if(n+a > b && n + b > a && a + b > n)
        //     cout << a << endl;
        // else    cout << -1 << endl;

        int ans = -1;
        int y = 0;
        forn(i,30){
            forn(j,30){
                y = (1 << i) | (1 << j);
            }
            if (y < x && x + y > (x ^ y) && y + (x ^ y) > x)
                ans = y;
        }
        cout << ans << endl;
    }
    
    return 0;
}
