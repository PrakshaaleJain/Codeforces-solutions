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
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        if(a == b)
            cout << "Bob" << endl;
        else{
            reverse(a.begin(), a.end());
            if(a == b)
                cout << "Bob" << endl;
            else
                cout << "Alice" << endl;
        }
        
    }
    
    
    return 0;
}