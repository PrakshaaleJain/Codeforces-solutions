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
        for (int i = 0; i < s.length(); i++){
            if(s[i] == 'L')
                l++;
            else if(s[i] == 'R')
                r++;
            else if(s[i] == 'U')
                u++;
            else
                 d++;
        }

        int ansx = 1;
        int ansy = 1;

        if(px >= 0 && r >= px){
            if(py >= 0 && u >= py)
                cout << "YES\n";
            else if(py < 0 && d >= abs(py))
                cout << "YES" << endl;
            else   
                cout << "NO" << endl;
        }
        else if(px < 0 && l >= abs(px)){
            if(py >= 0 && u >= py)
                cout << "YES\n";
            else if(py < 0 && d >= abs(py))
                cout << "YES" << endl;
            else   
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;

    }



    return 0;
}