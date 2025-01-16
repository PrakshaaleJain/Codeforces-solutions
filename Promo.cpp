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
    
    lli  n,q;
    cin >> n >> q;

    vector<lli> arr(n), pref(n+1);
    lli sum = 0;
    for (lli i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    for (lli i = 0; i < n; i++){
        pref[i+1] = arr[i] + pref[i];
    }
    

    while(q--){
        lli x,y;
        cin >> x >> y;

        cout << pref[n-x + y] - pref[n-x] << endl;




    }
    
    return 0;
}
