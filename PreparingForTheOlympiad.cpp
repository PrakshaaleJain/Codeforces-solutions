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

        vector<int> a(n);
        vector<int> b(n+1);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        b[n] = 0;

        int sum = 0;
        for(int i = 0; i < n; i++){
            int diff = a[i] - b[i + 1];
            if(diff > 0) sum += diff;
        }

        cout << sum << endl;




        
        
    }
    
    return 0;
}
