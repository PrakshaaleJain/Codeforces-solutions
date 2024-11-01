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
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(n == 1)
            cout << "-1 -1" << endl;
        else{
            bool ans = false;
            for (int i = 1; i < n; i++){
                if(s[i] != s[i - 1]){
                    ans = true;
                    cout << i << " " << i + 1 << endl;
                    break;
                }
            }
            
            if(ans == 0)
                cout << "-1 -1" << endl;
        }

    }
    
    
    return 0;
}