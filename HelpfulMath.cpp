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

    string s;
    cin >> s;

    vector<char> v;
    for (int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9')
            v.push_back(s[i]);
    }

    sort(v.begin(), v.end());
    string ans = "";
    for (int i = 0; i < v.size(); i++){
        ans += v[i];
        ans += "+";
    }
    
    ans.pop_back();
    cout << ans << endl;
    
    
    return 0;
}