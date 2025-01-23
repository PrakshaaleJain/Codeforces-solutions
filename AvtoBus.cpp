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
        lli n ;
        cin >> n ;

        if(n%2 != 0){
            cout << -1 << endl;
            continue;
        }

        lli mini = n / 6;
        lli maxi = n / 4;

        if(mini == 0)
            mini++;
        
        if(maxi == 0)
            maxi++;

        cout << mini << " " << maxi << endl;

    }
    
    return 0;
}
