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
        int n,k;
        cin >> n >> k;

        // if(n > k){
        //     cout << 
        // }        
        // else if (n == 1)
        //     cout << 0 << endl;
        // else
        //     cout << 1 << endl;

        // int p = 0;
        // while(pow(k,p) < n){
            
        // }

        // cout << p << endl;

        cout << (n-1 + k -2) / (k - 1) << endl;
    }
    
    return 0;
}
