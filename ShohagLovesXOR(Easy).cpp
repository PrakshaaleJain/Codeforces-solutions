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

    int t;
    cin >> t;

    while (t--){
        int x,m;
        cin >> x >> m;
        
        // int cnt = 0;
        // for (int i = 1; i <= n; i++){
        //     int val = i^x;
        //     if(val == 0)    
        //         continue;
        //     else if(x%val == 0 || i%val == 0)
        //         cnt++;
        // }
        // cout << cnt << endl;


        int cnt = 0;
        for (int i = 1; i <= min(2 * x, m); i++){
            if( x != i && (x% (x^i) == 0 || i % (x^i) == 0))
                cnt++;
        }

        cout << cnt << endl;
        
    }
    
    
    return 0;
}