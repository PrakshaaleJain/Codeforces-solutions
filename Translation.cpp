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
    
    string s, t;
    cin >> s >> t;
    
    int n = s.length();
    int m = t.length();

    bool ans = true;
    if(n != m)
        ans = false;
    else{
        int i = 0, j = n -1;
        while( i < n){
            if(s[i]!= t[j]){
                ans = false;
                break;
            }
            i++;
            j--;
        }
    }

    (ans) ? cout << "YES" << endl : cout << "NO" << endl;

    
    return 0;
}
