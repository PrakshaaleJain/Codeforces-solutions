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
        lli n;
        cin >> n;

        if(n%2 == 1){
            for (int i = 0; i < n; i++){
                cout << 7 << " ";
            }
            cout << endl;
            continue;
        }

        cout << 1 << " " << 3 << " ";
        for(int i = 0; i < n - 2; i++){
            cout << 2 << " ";
        }
        cout << endl;
    }
    
    return 0;
}
