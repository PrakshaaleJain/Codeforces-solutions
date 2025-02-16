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

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s == "yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}