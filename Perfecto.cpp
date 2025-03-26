#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i, n) for (int i = 0; i < int(n); ++i)
const int MAX=1e9+7;

bool isPerfectSquare(lli n){
    // If ceil and floor are equal
    // the number is a perfect
    // square
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
        return true;
    else
        return false;
}

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
        cin >> n;

        // if(n == 1){
        //     cout << - 1 << endl;
        //     continue;
        // }

        vector<lli> arr(n+1), sum(n+1);
        lli s = 0;
        for(lli i = 1; i <= n; i++){
            arr[i] = i;
            s += arr[i];
            sum[i] = s;
        }

        int ans = 0;
        for(lli i = 1; i <= n; i++){
            if(i == n && isPerfectSquare(sum[i])){
                ans = -1;
                break;
            }
            
            if(i != n && isPerfectSquare(sum[i])){
                swap(arr[i], arr[i+1]);
            }

        }

        if(ans == -1){
            cout << ans << endl;
            continue;
        }

        for (lli i = 1; i <= n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        
        
    }
    
    return 0;
}
