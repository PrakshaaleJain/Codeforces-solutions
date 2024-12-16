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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());
        int sum = 0;
        for(int i = 0; i < n; i++){
            if (sum + arr[i] <= k)
                sum += arr[i];
            else   break;
        }

        cout << k - sum << endl;



    
    }
    
    return 0;
}
