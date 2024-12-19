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
    
    int  t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        if(a >= b){
            cout << a << endl;
        }
        // else if(2*a <= b){
        //     cout << 0 << endl;
        // }
        else{
            int u = b - a;
            int p = a - u;
            cout << max(0,p) << endl;
        }


    }
    
    return 0;
}
