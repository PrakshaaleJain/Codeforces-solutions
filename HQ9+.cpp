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
    
    string s;
    cin >> s;
    
    bool ans = true;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'    ){
            cout << "YES" << endl;
            ans = false;
            break;
        }
    }

    if (ans){
        cout << "NO" << endl;
    }

    return 0;
}
