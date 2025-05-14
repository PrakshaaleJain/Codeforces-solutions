#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i, n) for (int i = 0; i < int(n); ++i)
const int MAX=1e9+7;


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

        vector<int> arr(n);
        forn(i,n) cin >> arr[i];

        if(n%2){
            cout << "NO" << endl;
            continue;
        }

        sort(arr.begin(), arr.end());

        bool flag = true;
        int ans = 0;
        for(int i=0; i < n; i+=2){
            if(max(ans, arr[i]) != max(ans, arr[i+1])){
                cout <<"NO" << endl;
                flag = false;
                break;
            }
            ans = max(ans, arr[i]) +1;
        }

        if(flag) cout << "YES" << endl;



    }
    
    return 0;
}
