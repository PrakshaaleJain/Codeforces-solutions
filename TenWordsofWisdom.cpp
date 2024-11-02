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

        // vector<int> a(n), b(n);
        // for (int i = 0; i < n; i++){
        //     cin >> a[i];
        //     cin >> b[i];
        // }

        // unordered_map<int, int> mp;
        // for (int i = 0; i < n; i++){
        //     mp[b[i]] = a[i];
        // }

        // vector<int> k = sort(b.begin(), b.end());
        // int ans = mp[k[n -1]];
        // for (int i = n - 1; i >= 0; i--){
        //     int temp = mp[k[i]];
        //     if(temp <= 10){
        //         ans = mp[b[i]];
        //         break;
        //     }
        // }


        // cout << b.find(ans)
        
        int ai = 0,  bi = 0;
        for (int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;


            if( b > bi && a <= 10){
                ai = i;
                bi = max(b, bi);
            }
        }


        cout << ai + 1 << endl;        
        
        

    }
    
    
    return 0;
}