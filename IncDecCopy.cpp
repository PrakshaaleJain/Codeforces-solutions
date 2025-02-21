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
        int n;
        cin >> n;

        vector<int> a(n), b(n+1);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i <= n; i++)
            cin >> b[i];
        

        lli ans = 0, maxi = INT_MAX;
        // bool check = false;
        // int maxi = INT_MAX;
        for(int i = 0; i < n; i++){
            // if(( (a[i] >= b[n]) || (b[i] <= b[n]) ) && !check){
            //     ans++;
            //     check = true;
            //     cout << "k";
            // }

            // ans += abs(a[i] - b[i]);

            // if(b[n] < a[i])
            //     ans = min(ans, abs(1 + b[n] + b[i] - a[i] - a[i]));
            // else if(a[i] <= b[n] && b[n] <= b[i])
            //     ans = min(ans, abs(b[i] - a[i] + 1));
            // else if(b[i] < b[n])
            //     ans = min(ans, abs(b[n] - a[i] + 1));

            ans += abs(a[i] - b[i]);
            maxi = min(maxi, 1LL*abs(a[i] - b[n]));
            maxi = min(maxi, 1LL*abs(b[i] - b[n]) );

            if(min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
                maxi = 0;
        }

        cout << ans + maxi + 1 << endl;
            



        
    }   
    
    return 0;
}
