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

    while(t--){
        int px,py;
        cin >> px >> py;

        string s;
        cin >> s;

        int l = 0, r = 0, d = 0, u = 0;
        bool ansx = false;
        bool ansy = false;
        for (int i = 0; i < s.length(); i++){
            if(s[i] == 'L')
                l--;
            else if(s[i] == 'R')
                r++;
            else if(s[i] == 'U')
                u++;
            else
                d--;
        }

        if(l >= -px && px < 0|| r >= px && px > 0) px = 0;
        if(py > 0 &&  u >= py || py < 0 && d <= -py) py = 0;

        if(!px && !py)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}