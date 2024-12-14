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
        int n;
        cin >> n;

        int ans = 0;
        if(n == 1)
            ans = 1;
        else{
            ans = 1;
            int l = 0;
            for (int r = l + 1; r < n; r = 2*r + 2){
                ans++;
            }
        }
        cout << ans << endl;
        
    }
    
    return 0;
}
