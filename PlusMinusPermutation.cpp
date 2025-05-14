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
        lli n,x,y;
        cin >> n >> x >> y;

        if(y==x){
            cout << 0 << endl;
            continue;
        }

        lli l = x * y / __gcd(x,y);  // lcm
        lli num_x = n, num_y = 1;
        lli num_pos_x = n/x, num_pos_y = n/y;
        lli overlap = n / l;

        lli left_pos_y = num_pos_y - overlap;
        lli left_pos_x = num_pos_x - overlap;
        lli sum = 0;

        // forn(i,left_pos_x){
        //     sum += num_x;
        //     num_x--;
        // }



        
        // forn(i,left_pos_y){
        //     sum -= num_y;
        //     num_y++;
        // }

        // cout << sum << endl;

        lli sum_x = (1LL * 2 * n - left_pos_x + 1) * left_pos_x / 2;
        lli sum_y = (1LL * left_pos_y + 1) * left_pos_y / 2;
        sum = sum_x - sum_y;

        cout << sum << endl;





    }

    
    return 0;
}
