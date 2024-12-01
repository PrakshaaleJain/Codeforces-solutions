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
    
    int  t;
    cin >> t;

    while(t--){
        int n, m,k;
        cin >> n >> m >> k;

        string s;
        cin >> s;

        int length = 0;
        int tik = 0;
        
           
        int i = 0;
        while (i < n){
            int cnt = 0;
            while (i < n && s[i] == '0'){
                cnt++;
                i++;
                if(cnt == m){
                    tik++;
                    i += k - 1;
                    break;
                }
            }
            if(cnt < m)
                i++;
        }
        int ans = tik;
        cout << ans << endl; 

    }
    
    return 0;
}