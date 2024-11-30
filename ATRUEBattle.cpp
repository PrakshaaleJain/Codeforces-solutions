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
        string s;
        cin >> n >> s;

        int c1 = 0, c0 = 0;
        for (int i = 0; i < n; i++){
            (s[i] == '1') ? c1++ : c0++;
        }

        (c1 >= c0) ? cout << "YES" << endl : cout << "NO" << endl;
        
    }
    


    return 0;
}