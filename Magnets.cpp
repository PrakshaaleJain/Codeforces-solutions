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

    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr); 
    int n;
    cin >> n;

    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    int cnt = 0;
    for(int i = 1; i < n; i++){
        // if((s[i][0] == 1 && s[i-1][1] == 1) || (s[i][0] == 0 && s[i-1][1] == 0))
        //     cnt++;

        if(s[i-1] != s[i])
            cnt++;
    }

    cnt++;

    cout << cnt << endl;
    return 0;
}
