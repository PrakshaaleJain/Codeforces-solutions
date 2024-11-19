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

        int arr[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }

        unordered_map<int,vector<int>> mp;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                mp[i-j].push_back(arr[i][j]);
            }
        }

        int k = 1 - n;
        int ans = 0;
        while(k < n){
            auto a = min_element(mp[k].begin(), mp[k].end());  // a is a pointer.
            if(*a < 0)
                ans -= *a;
            k++;
        }

        cout << ans << endl;
    }
    
    
    return 0;
}
