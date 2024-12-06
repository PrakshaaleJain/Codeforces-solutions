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
        int n;
        string s, r;
        cin >> n >> s >> r;

        int cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < n; i++)
            (s[i] == '1') ? cnt1++ : cnt0++;
        

        bool ans = true;
        for (int i = 0; i < n - 1; i++){
            
            if(cnt0 == 0 || cnt1 == 0){
                ans = false;
                break;
            }
            
            if(r[i] == '0')
                cnt1--;
            else
                cnt0--;

            
        }

        (ans) ? cout << "YES" << endl : cout << "NO" << endl;   
    }
    
    return 0;
}