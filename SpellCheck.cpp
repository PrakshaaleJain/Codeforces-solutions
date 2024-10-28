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
        int n;
        cin >> n;

        string a = "Timur";
        sort(a.begin(), a.end());

        string s;
        cin >> s;
        sort(s.begin(), s.end());

        cout << (s == a ? "YES" : "NO") << endl;
    }
    return 0;
}