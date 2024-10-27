#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        string a = "AAB";
        string s;

        for (int i = 0; i < n/2; i++){
            s += a;
        }
        if(n%2 == 1 || n == 0)
            cout << "NO" << endl;
        else if(n%2 == 0 && n != 0){
            cout << "YES" << endl;
            if(n == 2)
                cout << "AA" << endl;
            else
                cout << s << endl;
        }
    }
    
    
    return 0;
}