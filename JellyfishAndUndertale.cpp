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
        lli a,b,n;
        cin >> a >> b >> n;

        vector<lli> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        lli ans = 0;
        ans += b;
        for (int i = 0; i < n; i++){
            ans += min(a-1, arr[i]);
        }

        cout << ans << endl;
        
        
    }
    
    return 0;
}
