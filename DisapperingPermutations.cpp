#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define forn(i, n) for (int i = 0; i < (n); ++i)
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n), d(n);

        forn(i, n) cin >> arr[i];
        forn(i, n) cin >> d[i];
        
        vector<int> inv(n+1, -1);
        forn(i, n) inv[arr[i]] = i;
        
        vector<bool> cand(n, true);
        int candidate_count = n; 
        queue<int> q;
        vector<int> ans(n, 0);


        forn(qi, n){
            int p = d[qi] - 1;
            if(cand[p]){
                cand[p] = false;
                candidate_count--;
                q.push(p);
            }
            while(q.size() > 0){
                int rem = q.front();
                q.pop();
                int j = inv[rem+1]; 
                if(j >= 0 && cand[j]){
                    cand[j] = false;
                    candidate_count--;
                    q.push(j);
                }
            }
            ans[qi] = n - candidate_count;
        }
        
        forn(i, n) cout << ans[i] << " ";
        cout << endl;
    }
    
    return 0;
}
