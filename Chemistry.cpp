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
        int n,k;
        string s;
        cin >> n >> k >> s;
        
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++){
            mp[s[i]]++;
        }

        int diff = n - k;
        int odd = 0, even = 0;
        for(auto x : mp){
            (x.second%2 == 0) ? even++ : odd++;
        }

        if(odd > k + 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

        
    }
    
    return 0;
}
