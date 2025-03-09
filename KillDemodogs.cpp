#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
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
        lli n;
        cin >> n;

        // lli ans = 0;
        // for(lli i = 1; i <= n; i++){
        //     ans += i*n;
        // }

        // for(lli i = 1; i <= n; i++){
        //     ans += i;
        // }

        // lli a = (2022*n)%100000000;
        // cout << a << endl;

        lli ans=((((n*(n+1))%MAX)*(4*n-1))%MAX*337)%MAX;
        cout << ans << endl;

    }
    
    return 0;
}
