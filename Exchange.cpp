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

    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr); 
    
    int  t;
    cin >> t;

    while(t--){
        int n,a ,b;
        cin >> n >> a >> b;

        if(b < a){
            cout << 1 << endl;
            continue;
        }        

        int ans = ceil((float)n / a);
        cout << ans << endl;

    }
    
    return 0;
}
