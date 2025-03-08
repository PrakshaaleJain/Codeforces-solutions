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
        string s;
        cin >> n >> s;

        unordered_map<char, int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }

        lli underscore = mp['_'];
        lli hyphen = mp['-']/2;
        int rem = mp['-'] % 2;
        int hyphen2 = hyphen;
        if(rem == 1)    hyphen2 += 1;

        lli ans = (hyphen * hyphen2) * underscore;
        cout << ans << endl;
        


    }
    
    return 0;
}
