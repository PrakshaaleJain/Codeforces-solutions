#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        // int n1 , n0;
        // for (int i = 0; i < n; i++){
        //     if(s[i] == 0)
        //         n0++;
        //     else
        //         n1++;
        // }


        // int diff = abs(n1 - n0);
        if(n > 2 || s == "00" || s == "11" ){
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
        
    }

    
    return 0;
}