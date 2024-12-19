#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back

void solve(){
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int x = 0, y = 0;
    bool ans = false;

    for (int i = 0; i < 100; i++) {
        for (char dir : s) {
            if (dir == 'N') x++;
            else if (dir == 'S') x--;
            else if (dir == 'E') y++;
            else if (dir == 'W') y--;

            if (x == a && y == b) {
                cout << "YES" << endl;
                return ;
            }
        }
    }

    cout << "NO" << endl;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);  
    #endif

    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
