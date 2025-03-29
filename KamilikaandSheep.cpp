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
        
        int maxi = 0, mini = INT_MAX;
        forn(i,n){
            maxi = max(maxi, arr[i]);
            mini = min(mini, arr[i]);
        }

        cout << maxi - mini << endl;




    }
    
    return 0;
}