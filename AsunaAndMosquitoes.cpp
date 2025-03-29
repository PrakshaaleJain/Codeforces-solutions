#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i,n) for(int i = 0; i < n; i++)

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
        forn(i,n)
            cin >> arr[i];

        int maxi = INT_MIN;
        forn(i,n)
            maxi = max(maxi, arr[i]);
        
        vector<int> even, odd;
        forn(i,n){
            if(arr[i]%2 == 1)
                odd.pb(arr[i]);
            else    even.pb(arr[i]);
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        if(odd.size() == 0){
            cout << even[even.size() - 1] << endl;
            continue;
        }
        else if(even.size() == 0){
            cout << odd[odd.size() - 1] << endl;
            continue;
        }

        lli sum = 0;
        forn(i,odd.size())
            sum += odd[i];

        for(int i = 0;i < even.size(); i++)
            sum += even[i];


        cout << sum - odd.size() +1 << endl;
        continue;
        






        


    }
    
    return 0;
}