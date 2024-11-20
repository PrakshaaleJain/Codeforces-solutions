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
        vector<int> b(1e5+5);
        vector<int> a(1e5+5);
        b[0] = 0;
        b[n] = 0;
        for (int i = 1; i < n; i++){
            cin >> b[i];
        }
        for (int i = 1; i <= n; i++)
                a[i] = b[i - 1] | b[i];
        bool valid = true;
        for (int i = 1; i < n; i++)
            if ((a[i] & a[i + 1]) != b[i]) {
                valid = false;
                break;
            }
        if (valid) {
            for (int i = 1; i <= n; i++)
                cout << a[i] << ' ';
            cout << '\n';
        } 
        else
            cout << -1 << endl;

        
        
        
        

        

    }
    
    
    return 0;
}