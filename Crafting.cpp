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

        vector<lli> arr(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        for(int i = 0; i < n; i++)
            cin >> b[i];
        
        // bool ans = true;
        int flag = -1;
        bool ans = false;
        lli maxdiff = 0, minpos = INT_MAX;
        for(int i = 0; i < n; i++){
            if(arr[i] < b[i]){
                if(flag != -1)  ans = true;
                flag = i;
                maxdiff += (b[i] - arr[i]);
            }
            else if(arr[i] >= b[i]){
                minpos = min(minpos, (arr[i] - b[i]));
            }
        }

        if(ans){
            cout << "NO" << endl;
            continue;
        }
        cout << ((minpos >= maxdiff) ? "YES" : "NO") << endl;
        
    }
    
    return 0;
}
