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
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];
    
        int q = min(n,k);
        lli sum = 0, ans = 0;
        int maxi = 0;
        for(int i = 0; i < q; i++){
            sum += a[i];
            maxi = max(maxi, b[i]);

            ans = max(ans, sum + 1LL*maxi*(k-i-1));
        }

        cout << ans << endl;
        



        


    }
    
    return 0;
}