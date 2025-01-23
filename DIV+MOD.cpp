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
        lli l,r,a;
        cin >> l >> r >> a;

        // lli maxi = 0;
        // for(int i = l; i <= r; i++){
        //     lli f = i/a + i%a;
        //     maxi = max(f, maxi);
        // }

        // f_max = floor() + (a-1)
        // floor is max when x --> n*a


        // f1 is when x --> n*a => x%a == 0
        // lli f1 = 0, k = 0;
        // for(int i = r; i <= l; i++){
        //     if(i%a == 0){
        //         f1 += i/a;
        //         k = i;
        //         break;
        //     }
        // }


        // f2 id when x --> n*(a-1) + (a-1);
        // lli f2 = k - 1/a;
        // f2 += a - 1;
        // cout << max(f1, f2) << endl;



        // cout << maxi << endl;

        // for(lli i = r; i >= l; i--){
        //     if(i%(a-1) == 0){
        //         ans += i/(a-1);
        //         ans -= floor(i/(float)(a*(a-1)));
        //         break;
        //     }
        // }

        lli ans = r / a + r % a;
        lli m = r / a * a - 1;
        if(m >= l) ans = max(ans, m / a + m % a); 


        cout << ans << endl;



        
        
    }
    
    return 0;
}
