#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i, n) for (int i = 0; i < int(n); ++i)
const int MAX=1e9+7;

bool palindrome(vector<int>& a, int m){
    int l = a.size();
    forn(i,l)   a[i] = a[i]%m;

    forn(i,l/2) if(a[i] != a[l-i]) return false;
    return true;    
};


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
        int n;
        cin >> n;

        vector<int> arr(n);
        forn(i,n) cin >> arr[i];
        
        // int maxi = 1;
        // forn(i,n) maxi = max(maxi,arr[i]);

        // bool b = false;
        // if(b == false){
        //     b = palindrome(arr, maxi);
        //     maxi--;
        // }

        // cout << maxi << endl;

        int maxi = 0;
        forn(i,n) maxi = __gcd(abs(arr[i]-arr[n - 1 - i]),maxi);
        cout << maxi << endl;




    }
    
    return 0;
}
