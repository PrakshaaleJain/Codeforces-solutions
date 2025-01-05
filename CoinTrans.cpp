#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back

lli solve(lli n){
    if(n <= 3) return 1;
    else{
        return 2 * solve(n/4);
    }
}



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif
    
    int  t;
    cin >> t;

    while(t--){
        lli n;
        cin >> n;

        cout << solve(n) << endl;
        
    }
    
    return 0;
}
