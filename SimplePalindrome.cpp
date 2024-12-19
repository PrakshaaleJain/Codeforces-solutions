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
        int n;
        cin >> n;

        string vowel = "aeiou";
        if(n > 5){
            cout << t << endl;
        }
        else
            cout << vowel.substr(0,n);
    }

    
    return 0;
}
