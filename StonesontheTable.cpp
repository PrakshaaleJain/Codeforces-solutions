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

    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1])
            cnt += 1;
    }

    cout << cnt << endl;

    return 0;
}
