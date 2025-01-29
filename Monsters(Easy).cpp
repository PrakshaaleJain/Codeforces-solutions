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
        lli n;
        cin >> n;

        vector<lli> arr(n);
        for(lli i = 0; i <n; i++)
            cin >> arr[i];
        
        sort(arr.begin(), arr.end());
        lli val = arr[0];
        lli cnt = 0;
        // for(int i = 1; i < n; i++){
        //     if(arr[i] >= val + 1){
        //         cnt += (arr[i] - val - 1);
        //         arr[i] = val + 1;
        //         val = arr[i];
        //     }
        // }

        vector<lli> b(n);
        b[0] = 1;
        for(lli i = 1; i<n; i++){
            b[i] = min(b[i-1] + 1, arr[i]);
        }

        for(lli i = 0; i < n; i++){
            cnt += arr[i] - b[i];
        }

        cout << cnt << endl;
    }
    
    return 0;
}
