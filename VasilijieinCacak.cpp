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
        lli n, k , x;
        cin >> n >> k >> x;

        lli hsum =  k * (2*n - k + 1) / 2;
        // for(int i = n; i > n - k; i--)
        //     hsum += i;
        
        // for(int i = 1; i <= k; i++)
        //     lsum += i;

        lli lsum = k*(k + 1) /2;
        
        (x <= hsum && x >= lsum) ? cout << "YES" : cout << "NO";
        cout << endl;

    }
    
    return 0;
}
