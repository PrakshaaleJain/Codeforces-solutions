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
        int xa,ya;
        int xb,yb;
        int xc,yc;

        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xc >> yc;

        // int y = 1, x = 1;
        // // checking for y axis;
        // if(xa <= xb && xa >= xc){
        //     x = 1;
        // }
        // else{
        //     x = abs(min(xb - xa,xc - xa));
        // }

        // // checking for x axis;
        // if(ya <= yb && ya >= yc){
        //     y = 1;
        // }
        // else{
        //     y = abs(min(yb - ya,yc - ya));
        // }

        int dab = abs(xa - xb) + abs(ya - yb);
        int dac = abs(xa - xc) + abs(ya - yc);
        int dcb = abs(xc - xb) + abs(yc - yb);

        cout << (dab + dac - dcb) / 2 + 1  << endl;

        // cout << x + y << endl;


    }
    
    return 0;
}
