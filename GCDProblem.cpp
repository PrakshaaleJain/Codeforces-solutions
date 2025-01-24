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
        int n;
        cin >> n;

        int a,b,c;
        c = 1;
        // this means a + b = n - 1;    

        // now for a = c + 1 and b = n - 3; check for all possible values.
        a = c + 1;
        b = n - 3;
        while(__gcd(a,b) != c){
            a++;
            b--;
        }

        cout << a << " " << b << " " << c << endl;

    }
    
    return 0;
}
