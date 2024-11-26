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

    int n = 5;
    vector<int> arr(n);
    for (int  i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int ans = 0;
    for (int i = 1; i < n; i++){
        if(arr[i] - arr[i-1] != 1){
            ans = i;
            break;
        }
    }

    ans = (ans == 0) ? 5 : ans;
    cout << ans;
    return 0;
}