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
        int n,m,k;
        cin >> n >> m >> k;        

        int single_row_k = k/n;
        if(k%n) single_row_k++;

        int ans = 0;
        ans += ceil(single_row_k/2) + 1;

        cout << ans << endl;


    }
    
    return 0;
}