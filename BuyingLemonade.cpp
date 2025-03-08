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
        int n,k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());
        if(k <= arr[n-1]){
            cout << k << endl;
            continue;
        }

        lli sum = 0, i = 0;
        while(sum < k){
            sum += arr[i];
            i++;
        }

        cout << k + i - 1 << endl;


        
    }
    
    return 0;
}
