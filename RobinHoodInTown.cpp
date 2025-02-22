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

        vector<lli> arr(n);
        lli sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr.begin(),arr.end());
 
        if (n < 3){
            cout << "-1\n";
            continue;
        }
        cout << max(0LL, 1LL*arr[n/2]*2*n-sum+1) << '\n';

        
    }
    
    return 0;
}
