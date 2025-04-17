#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i,n) for(int i = 0; i < n; i++)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif
    
    int  t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        vector<int> infected(m);
        forn(i,m)
            cin >> infected[i];
        
        sort(infected.begin(), infected.end());

        vector<int> seg;
        for (int i = 0; i < m-1; i++){
            seg.pb(infected[i+1] - infected[i] - 1);
        }
        seg.pb(n - infected[m-1] + infected[0] - 1);
        sort(seg.rbegin(), seg.rend());
        int safe = 0, day = 0;

        for(int i = 0; i < seg.size(); i++){
            int l = seg[i];
            l -= 2*day;
            if(l <=0) break;
            safe += l - 1;
            if(l == 1) safe++;
            day+=2;
        }

        cout << n - safe << endl;





    }
    
    return 0;
}