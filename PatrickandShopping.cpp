#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int l1 = d1 + d3 + d2;
    int l2  = 2 * (d1 + d3);
    int l3 = 2 * (d1 + d2);
    int l4 = 2 * (d2 + d3);

    // if(d1 + d2 <= d3)
    //     cout << 2*(d1 + d2);
    // else
    //     cout << d1 + d2 + d3 << endl;
    
    // return 0;

    cout << min(l1,min(l2,min(l3,l4))) << endl;
}