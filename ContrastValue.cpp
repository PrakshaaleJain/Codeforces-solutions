#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i,n) for(int i = 0; i < n; i++)

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
        forn(i,n)
            cin >> arr[i];

        // if(n == 1 || n == 2){
        //     cout << n << endl;
        //     continue;
        // }
        
        // vector<int> cleaned;
        // for(int i = 1; i < n; i++){
        //     if(arr[i] != arr[i-1])
        //     // arr.erase(arr.begin() + i);
        //     cleaned.pb(arr[i]);
        // }

        // set<int> st;
        // for(int i = 1; i < cleaned.size(); i++)
        //     st.insert(abs(cleaned[i] - cleaned[i-1]));

        // cout << st.size() << endl;

        n = unique(arr.begin(), arr.end()) - arr.begin();
        int ans = n;
        for (int i = 0; i + 2 < n; ++i) {
        ans -= (arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2]);
        ans -= (arr[i] > arr[i + 1] && arr[i + 1] > arr[i + 2]);
        }
        cout << ans << '\n';

        // if(diff.size() == 0){
        //     cout << 1 << endl;
        //     continue;
        // }
        // cout << diff.size() << endl;

    }
    
    return 0;
}