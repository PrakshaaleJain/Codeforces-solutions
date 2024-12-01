#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif
    
    int  t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a >> b;
        
        int m = (a*b)/gcd(a,b);
        int ans = m;
        while(m >= a || m >= b){
            if(m%a == m % b){
                ans = m;
                break;
            }
        }
        cout << ans << endl;            
    }
    
    return 0;
}