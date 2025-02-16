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

        // set<int> s1,s2;
        // int p = 0;
        // for(int i =0; i < n; i++){
        //     if(s1.find(s[i]) == s1.end()){
        //         s1.insert(s[i]);
        //     }
        //     else{
        //         p = i;
        //         break;
        //     }
        // }

        // for(int i = p; i < n; i++){
        //     s2.insert(s[i]);
        // }

        // if(p == 0)
        //     s2.erase(s2.begin(), s2.end());

        // cout << s1.size() + s2.size() << endl; 

        vector<int> cnt(26, 0), p(26, 0);
        for(auto x: s) cnt[x - 'a']++;
        int ans = 0;
        for(auto x: s) {
            --cnt[x - 'a'];
            ++p[x - 'a'];
            int cur = 0;
            for(int i = 0; i < 26; ++i) {
                cur += min(1, cnt[i]) + min(1, p[i]);
            }
            ans = max(ans, cur);
        }
        cout << ans << "\n";



        





    }
    
    return 0;
}
