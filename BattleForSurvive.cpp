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
        lli n;
        cin >> n;

        vector<lli> arr(n);
        lli maxi = INT_MIN, index = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        lli sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }

        cout << sum - 2*arr[n - 2] << endl;


    }
    
    return 0;
}
