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

        int l = s.length();
        bool ans = false;

        // if(l != 1){
        //     for (int i = 1; i < l; i++){
        //         if(s[i] == s[i-1]){
        //             cout << s.substr(i-1,2) << endl;
        //             ans = true;
        //             break;
        //         }
        //     }

        //     if(ans == false){
        //         for (int i = 2; i < l; i++){
        //             if(s[i] != s[i-1] && s[i] != s[i-2] && s[i-1] != s[i-2]){
        //                 cout << s.substr(i-2,3) << endl;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // else
        //     cout << -1 << endl;

        if(l == 1){
            cout << -1 << endl;
        }
        else{
            for (int i = 1; i < l; i++){
                if(s[i] == s[i-1]){
                    cout << s.substr(i-1,2) << endl;
                    ans = true;
                    break;
                }
            }

            if(ans == false){
                cout << -1 << endl;
            }
        }
    }   
    
    
    return 0;
}