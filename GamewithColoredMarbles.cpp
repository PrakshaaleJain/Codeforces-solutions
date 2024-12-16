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

        vector<int> arr(n);
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }

        // int cnt = 0, more1 = 0;
        // int step = (n%2 == 0) ? n/2 : n/2 + 1;
        // for (auto & a : mp){
        //     if (a.second == 1)
        //         more1++;
        //     else
        //         cnt++;
        // }
        
        // cout << (cnt+1) * (more1 + 1) /2 * 2 << endl;

        int only1 = 0, more1 = 0;
        for(auto & a: mp){
            if(a.second == 1)
                only1++;
            else if(a.second > 1)
                more1++;
        }

        cout << more1 + (only1 + 1) / 2 * 2 << endl;

        



        
    }

    return 0;
}
