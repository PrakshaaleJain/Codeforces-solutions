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
        vector<vector<int>> a(n, vector<int>(n));
        int l = 1, r = n * n, t = 0;
        forn(i, n) {
        forn(j, n) {
            if (t) a[i][j] = l++;
            else a[i][j] = r--;
            t ^= 1;
        }
        if (i & 1) reverse(a[i].begin(), a[i].end());
        }
        forn(i, n) forn(j, n) cout << a[i][j] << " \n"[j == n - 1];
    }    
    return 0;
}