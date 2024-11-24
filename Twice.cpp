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

        int ans = 0;
        vector<int> arr(n);
        unordered_map<int,int>map;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            map[arr[i]]++;
        }
        

        
        for (int i = 0; i < n; i++){
            ans += map[arr[i]] / 2;
            map[arr[i]] = 0;
        }

        cout << ans << endl;
        
    }
    
    
    return 0;
}