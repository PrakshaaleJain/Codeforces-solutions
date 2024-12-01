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
        lli w,b;
        cin >> w >> b;

        lli k = w + b;
        lli n = (pow(1 + 8*k, 0.5) - 1)/2;
        cout << n << endl;


    }
    
    return 0;
}