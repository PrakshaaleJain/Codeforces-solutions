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
        lli n;
        cin >> n;

        // lli cnt = 0;
        // while(cnt < time){
        //     cnt += 15;
        // }

        // cout << cnt << endl;

        // lli pizza = ceil(n / 6);
        cout << max(6LL, n + 1)/ 2 * 5 << endl;

    }
    
    return 0;
}
