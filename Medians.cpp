#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i, n) for (int i = 0; i < int(n); ++i)
const int MAX=1e9+7;


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
        int n,k;
        cin >> n >> k;

        // if(n == 1 || (k%2 && k-1 == n/2)){
        //     cout << 1 << endl << 1 << endl;
        //     continue;
        // }

        // if(k%2 && k-1 != n/2){
        //     cout << - 1 << endl;
        //     continue;
        // }


        // cout << 3 << endl;
        // cout << 1 << " " << k << " " << k + 1 << endl;

        if(n == 1){
            cout << "1\n1" << endl;
            continue;
        }

        if(k == 1 || k == n)
            cout << -1 << endl;
        else{
            int a = k - k % 2;
            int b = k + 1 + k % 2;
            cout << "3\n1 " << a << " " << b << endl;
        }


        
        // if(k - 1 != n/2){
        //     cout << -1 << endl;
        //     continue;
        // }



    }
    
    return 0;
}
