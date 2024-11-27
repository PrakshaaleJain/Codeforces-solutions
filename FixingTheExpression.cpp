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
        string s;
        cin >> s;

        int f = stoi(s.substr(0,1));
        int l = stoi(s.substr(s.length()-1,1));
        char c = s[1];

        if(c == '>' && f < l){
            s[1] = '<';
        }
        else if(c == '<' && f > l){
            s[1] = '>';
        }
        else if( c == '=' && f != l){
            s[1] = (f > l) ? '>' : '<';
        }
        else if(f == l && c != '='){
            s[1] = '=';
        }


        cout << s << endl;

    }
    
    return 0;
}