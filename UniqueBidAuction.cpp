#include <bits/stdc++.h>
using namespace std;

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

        int arr[n + 1] = {0};
        // int v[n] = {0};
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            int k;
            cin >> k;
            arr[k]++;
            v[i] = k;
        }

        int ans = 0;
        for (int i = 0; i < n + 1; i++){
            if(arr[i] == 1){
                ans = i;
                break;
            }
        }
        
        auto f = v.begin();
        auto l = v.end();

        auto it = find(f, l , ans);
        if(it != v.end())
            cout << it - v.begin() + 1 << endl;
        else
            cout << -1 << endl;
    }
    
    
    return 0;
}