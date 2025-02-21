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
    
    int  t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;
        
        int c0 = 0, c1 = 0;
        for (int i = 0; i < n; i++){
            (s[i]== '0') ? c0++ : c1++;
        }
        
        int ans = min(c0, c1);
        if(c0 == 0){
            ans = 1;
        }


        int ans = 0;
        for (int i = 1; i < n; i++){
            if(s[i] != s[i-1])  ans++;
        }
        




        cout << ans << endl;
        
        
    }
    
    return 0;
}