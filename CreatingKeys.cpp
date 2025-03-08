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
        lli n, x;
        cin >> n >> x;
        vector<lli> ans(n);
        lli num = 0;
     
        for(int i = 0 ; i < n; i++){
            num = num | i;
            if ((num & (~x)) == 0) ans[i] = i;
            else break;
        }
     
        if (num != x) ans[n - 1] = x;
     
        for (lli i : ans) {
            cout << i << " ";
        }
     
        cout << endl;


    }
    
    return 0;
}
