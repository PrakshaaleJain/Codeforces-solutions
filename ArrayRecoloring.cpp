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
        lli n,k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        if(k == 1){
            // vector<int> s(arr.begin(), arr.end());
            // sort(s.begin(), s.end());   
            // cout << s[n-1] + s[n - 2] << endl;
            // continue;

            vector<int> v(3);
            v.pb(arr[0]);
            v.pb(arr[n-1]);

            int maxi = 0;
            for(int i = 1; i < n-1; i++)
                maxi = max(maxi, arr[i]);
            
            v.pb(maxi);
            sort(v.rbegin(), v.rend());
            cout << v[0] + v[1] << endl;

            continue;
        

        }
        vector<int> s(arr.begin(), arr.end());
        sort(s.rbegin(), s.rend());
        
        lli sum = 0;
        // for(int i = n-1; i >= n-1-k; i--)
        //     sum += s[i];
        
        // cout << sum << endl;

        for(int i = 0; i <= k; i++)
            sum += s[i];

        cout <<  sum << endl;






    }
    
    return 0;
}