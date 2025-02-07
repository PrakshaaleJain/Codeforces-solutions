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
    
    string s,t;
    cin >> s >> t;

    string ans  = "";
    for(int i =0; i < s.length(); i++){
        int si = s[i] -'0';
        int ti = t[i] -'0';

        int v = si^ti;
        ans += to_string(v);
    }

    cout << ans;
    
    return 0;
}
