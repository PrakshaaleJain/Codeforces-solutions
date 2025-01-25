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
        int n,m,q;
        cin >> n >> m >> q;

        vector<int> arr(m);
        cin >> arr[0] >> arr[1]; // since m = 2, 

        int cell;
        cin >> cell;

        int ans = 0, diff1 = 0, diff2 = 0, diff3 = 0;
        // if((cell < arr[0] && cell < arr[1])){
        //     diff1 = max(arr[0],arr[1]);
        // }
        // else if((cell > arr[0] && cell > arr[1])){
        //     diff2 = max(n - arr[0], n - arr[1]);
        // }
        // else{
        //     diff3 = max(abs(cell - arr[0]), abs(cell - arr[1]));
        // }

        if(cell < arr[0] && cell < arr[1]){
            int mina = min(arr[0], arr[1]);
            ans = mina - 1;
        }
        else if(cell > arr[0] && cell > arr[1]){
            int maxi = max(arr[0], arr[1]);
            ans = n - maxi;
        }
        else if(cell == arr[0] || cell == arr[1])
            ans = 0;
        else{
            diff1 = abs(cell - arr[0]);
            diff2 = abs(cell - arr[1]);
            ans = (diff1 + diff2) / 2;
        }

        cout << ans << endl;
    }
    
    return 0;
}
