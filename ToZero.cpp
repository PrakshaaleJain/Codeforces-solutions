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
        lli n, k;
        cin >> n >> k;
        
        if(n == k){
            cout << 1 << endl;
            continue;
        }
        
        lli ans = 1;
        n -= (n%2 == 0 ? k-1 : k);

        ans += n/(k-1);
        if(n%(k-1)) ans++;
        cout << ans << endl;
        


    }
    
    return 0;
}