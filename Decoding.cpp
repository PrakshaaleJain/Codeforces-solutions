#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<char> s1;
    for (int i = 0; i < n; i++){
        if(i%2 == 0)
            s1.insert(s1.begin(), s[i]);
        else
            s1.push_back(s[i]);
     }
    
    string ans = "";
    if(n%2 == 1)
        for (int i = 0; i < n; i++)
            ans += s1[n-1-i];
    else
        for (int i = 0; i < n; i++)
            ans += s1[i];
        
    cout << ans << endl;
    
    return 0;
}