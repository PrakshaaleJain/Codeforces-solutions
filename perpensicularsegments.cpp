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

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        int ax = 0, ay = 0;
        int bx = min(y,x), by = min(x,y);
        int cx = 0, cy = min(x,y);
        int dx = min(x,y), dy = 0;

        cout << ax << " " << ay << " " << bx << " " << by << endl;
        cout << cx << " " << cy << " " << dx << " " << dy << endl;

    }

    return 0;
}
