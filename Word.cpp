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

    int n = s.size();
    int u = 0, l = 0;

    for(int i = 0; i < n; i++){
        if(isupper(s[i])) u++;
        else l++;
    }

    for(int i = 0; i < n; i++){
        if(u > l) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
    
    cout << s << endl;
    return 0;
}