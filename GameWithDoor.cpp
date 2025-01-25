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

    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr); 
    
    int  t;
    cin >> t;

    while(t--){
        int l,r,L,R;
        cin >> l >> r >> L >> R;

        int maxal = max(l,L);
        int minar = min(r, R);

        // int ans = 0;
        // if(maxal <= minar)  
        //     ans += minar - maxal;
        // else{
        //     ans = 1;
        // }


        int ans = minar - maxal;
        if(minar - maxal + 1 <= 0)
            ans = 1;
        else{
            if(l != L) ans += 1;
            if(r != R) ans += 1;
        }

        cout << ans << endl;

    }
    
    return 0;
}
