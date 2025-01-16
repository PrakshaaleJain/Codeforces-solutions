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
        lli n,q;
        cin >> n >> q;

        vector<lli> pref(n + 1), suf(n);
        lli sum = 0;
        for (lli i = 1; i <= n; i++){
            lli z;
            cin >> z;
            sum += z;
            pref[i] = sum;
        }


        while(q--){
            lli l,r,k;
            cin >> l >> r >> k;

            lli res =  pref[l-1] + (r-l+1)*k + (pref[n] - pref[r]);
            cout << (res%2 == 1 ? "YES" : "NO") << endl;

        }





        



        
        
    }
    
    return 0;
}
