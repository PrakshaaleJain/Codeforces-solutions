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
        int n,d;
        cin >> n >>  d;

        cout << 1 << " ";
        if(n >= 3 || d%3 == 0) cout << 3 << " ";
        if(d == 5) cout << 5 << " ";
        if(n >= 3 || d == 7) cout << 7 << " ";
        if(n >= 6 || (n >= 3 && d%3 == 0) || d == 9) cout << 9;
        
        cout << endl;
    }

    
    return 0;
}
