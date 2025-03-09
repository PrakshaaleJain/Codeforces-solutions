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

        lli k = 0;
        vector<lli> v;
        for(int i = 0; i < n; i++){
            if(s[i] == 'L'){
                v.pb(n-1-2*i);
                k += i;
            }
            else{
                v.pb(i-(n-1-i));
                k += n - 1 - i;
            }
        }

        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n; i++) {
            if (v[i] > 0) {k += v[i];}
            cout << k << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
