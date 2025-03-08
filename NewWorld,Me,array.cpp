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
        int n,k,p;
        cin >> n >> k >> p;
        int div = (k / p);
        // if(abs(div) > n){
        //     cout << -1 << endl;
        // }
        // else{
        //     cout << abs(div) << endl;
        // }
        int rem = k % p;
        if(rem == 0)
            cout << ((abs(div) > n) ? -1 : abs(div))<< endl;
        else{
            cout << ((abs(div) + 1 > n) ? -1 : abs(div) + 1) << endl;
        }

    
        
    }
    
    return 0;
}
