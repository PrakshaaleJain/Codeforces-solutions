#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
const int MAX=1e9+7;

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
        lli n,x,k;
        string s;
        cin >> n >> x >> k >> s;

        int pos = x;
        // bool flag = true;
        for(lli i = 0; i < n; i++){
            if(s[i] == 'L') pos--;
            else    pos++;
            
            k--;
            if(!pos){
                // flag = false;
                break;
            }
        }

        lli ans = 0;
        if(!pos){
            ans = 1;
            for(lli i = 0; i < n; i++){
                if(s[i] == 'L') pos--;
                else    pos++;

                if(!pos){
                    ans += k / (i + 1);
                    // flag = false;
                    break;
                }
            }
        }

        cout << ans << endl;

    }
    
    return 0;
}
