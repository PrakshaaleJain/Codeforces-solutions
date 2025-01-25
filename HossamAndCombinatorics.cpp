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
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int maxdiff = arr[n - 1] - arr[0];

        if(maxdiff == 0){
            cout << 1LL * n*(n-1) << endl;
            continue;
        }

        int low = 0, high = 0, l = 0, h = n - 1;
        while(arr[l] == arr[0]){
            low++;
            l++;
        } 

        while(arr[h] == arr[n-1]){
            high++;
            h--;
        } 

        cout << 1LL * low * high * 2 << endl;
        
    }
    
    return 0;
}
