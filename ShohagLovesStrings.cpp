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

    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        int n = s.length();
        bool ans = false;

        for (int i = 0; i < n - 1; i++){
            if(s[i] == s[i+1]){
                cout << s.substr(i,2) << endl;
                ans = true;
                break;
            }
        }

        if(ans == false){
            for (int i = 0; i < n - 2; i++){
                if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]){
                    cout << s.substr(i,3) << endl;
                    ans = true;
                    break;
                }
            }
        }

        if(ans == false)
            cout << -1 << endl;
    }  
    
    
    return 0;
}