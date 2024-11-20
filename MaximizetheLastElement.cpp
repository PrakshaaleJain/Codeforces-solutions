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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int ans = arr[0];
        for (int i = 0; i < n; i++){
            if(i%2 == 0)
                ans = max(ans,arr[i]);
        }

        cout << ans << endl;
        

        

    }
    
    
    return 0;
}