#include <bits/stdc++.h>
using namespace std;

# define lli long long int

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int t;
    cin >> t;

    while (t--){
        lli a,b,c;
        cin >> a >> b >> c;
        lli sum = a + b + c;

        cout << sum / 2 << endl;
    }
    return 0;
}