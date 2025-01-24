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
        // int  n;
        // cin >> n;

        // vector<int> arr(n);
        // int maxi = 0, mini = INT_MAX;
        // int p = 0;
        // for (int i = 0; i < n; i++){
        //     cin >> arr[i];
        // }

        // int diff1 = arr[n-1] - arr[0];
        // int diff2 = 0;
        // int val = 0;
        // for(int i = 1; i < n; i++){
        //     maxi = max(maxi, arr[i]);
        //     if(maxi == arr[i]) val = arr[i-1];
        // }
        // diff2 = maxi - val;

        // int mini3 = INT_MAX, diff3 = 0;
        // for(int i = 0; i < n - 1; i++){
        //     mini3 = min(mini3, arr[i]);
        // }
        // diff3 = arr[n - 1] - mini3;


        // int maxi4 = 0, diff4 = 0;
        // for (int i = 1; i < n; i++){
        //     maxi4 = max(maxi4, arr[i]);
        // }

        // diff4 = maxi4 - arr[0];

        // cout << max(diff1 , max(diff2, max(diff3, diff4))) << endl;
        


        // check for i + 1 element
        // if(p == n - 1){
        //     mini = min(mini, arr[0]);
        //     for(int i = 0; i < p; i++){
        //         mini = min(mini, arr[i]);
        //     }
        //     cout << maxi - mini << endl;
        //     continue;
        // }

        int N;
        cin >> N;

        int A[N];
        int ans = -1000000007;

        for(int i = 0; i < N; ++i){
            cin >> A[i];
        }

        for(int i = 0; i < N; ++i){
            ans = max(ans, A[(i - 1 + N) % N] - A[i]);
        }

        for(int i = 1; i < N; ++i){
            ans = max(ans, A[i] - A[0]);
        }

        for(int i = 0; i < N - 1; ++i){
            ans = max(ans, A[N - 1] - A[i]);
        }

        cout << ans << '\n';
            
    }
    
    return 0;
}
