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
    while (t--){
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;
        int x = 0, y = 0;
        
        // for (int i = 0; i < n; i++){
        //     if(s[i] == 'N')
        //         y++;
        //     else if(s[i] == 'S')
        //         y--;
        //     else if(s[i] == 'E')
        //         x++;
        //     else if(s[i] == 'W')
        //         x--;
        // }

        // if(x == 0 || y == 0)    
        //     cout << "NO" << endl;
        // else{
        //     if(a%x == 0 && b%y == 0)
        //         cout << "YES" << endl;
        //     else
        //         cout << "NO" << endl;
        // }

        bool ans = false;
        for (int i = 0; i < 100; i++){
            if(s[i] == 'N')
                y++;
            else if(s[i] == 'S')
                y--;
            else if(s[i] == 'E')
                x++;
            else if(s[i] == 'W')
                x--;
            
            if(x == a && y == b){
                cout << "YES" << endl;
                break;
                ans = true;
            }
        }

        if(ans == false){
            cout << "NO" << endl;
        }
    }

    
    return 0;
}