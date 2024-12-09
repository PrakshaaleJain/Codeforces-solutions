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
        cin >> n;
        int w = 0, h = 0;    

        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            w = max(w, x);
            h = max(h, y);
        } 

        cout << 2* (w + h) << endl;
    }
    
    return 0;
}
