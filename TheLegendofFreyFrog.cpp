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
        int x,y, k;
        cin >> x >> y >> k;

        int xs = 0, ys = 0;
        bool d = true;  // d checks if the frog is facing x-direction .
        int ans = 0;
        while(xs < x || ys < y){

            if(d){
                xs += k;
            }
            else
                ys += k;

            d = !d;
            ans++;

            // if(xs >= x && ys >= y)
            //     break;

        }


        cout << ans << endl;

    }
    
    return 0;
}
