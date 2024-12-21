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
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int cnt = 0;     
        int l = 0, r = n - 1;
        while(l <= r && arr[l] == 0) l++;
        while(l <= r && arr[r] == 0) r--;

        if(l > r){
            cout << 0 << endl;
            continue;
        }

        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = l; i <= r; i++ ){
            // if(arr[i] != 0)
            //     mini = min(mini, arr[i]);
            // else{
            //     flag = true;
            // }
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }

        if(mini == 0 && maxi == 0)
            cnt = 0;
        else if(mini == 0 && maxi != 0)
            cnt = 2;
        else    
            cnt = 1;


        cout << cnt << endl;

    }
    
    return 0;
}
