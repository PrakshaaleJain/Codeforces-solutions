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
        lli a,b;
        cin >> a >> b;
        lli diff = abs(a - b);
        if(diff == 0){
            cout << 0 << " " << 0 << endl;
        }
        else{
            cout << diff << " " << min(a%diff, diff - (a%diff)) << endl;
        }
    }
    
    return 0;
}
