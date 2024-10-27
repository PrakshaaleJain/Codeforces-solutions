#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int t;
    cin >> t;
    while (t--){
        int r, b, d;
        cin >> r >> b >> d;

        int mi = min(r,b);
        int ma = max(r,b);


        // error ---> n is overflowed;
        unsigned long long int n = mi*(long long int)(d + 1);
        if(n >= ma)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;        
    }
    
    
    return 0;
}