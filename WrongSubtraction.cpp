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
    
    int n , k;
    cin >> n >> k;

    while(k--){
        if(n%10 != 0)
            n--;
        else
            n = n/10;
    }

    cout << n << endl;
    return 0;
}
