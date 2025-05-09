#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i, n) for (int i = 0; i < int(n); ++i)
const int MAX=1e9+7;


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

        vector<int> a(n), b(n);
        forn(i,n) cin >> a[i];
        forn(i,n) cin >> b[i];

        int l = -1, r = -1;
        forn(i,n){
            if(a[i] != b[i]){
                r = i;
                if(l = -1)   l = i;
            }
        }

        while(l > 0 && b[l] >= b[l-1]) l--;
        while(r < n-1 && b[r] <= b[r+1]) r++;
        


        cout << l+1 << " " << r+1 << endl;
    }
    
    return 0;
}
