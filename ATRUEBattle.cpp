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
        string s;
        cin >> n >> s;

        // int c1 = 0, c0 = 0;

        // for (int i = 1; i < n; i++){
        //     if(s[i] == '0' && s[i - 1] == '1')
        //         s.replace(i-1, i, to_string('0'));
        // }

        vector<int> ss(n);
        for (int i = 0; i < n; i++){
            if(s[i] == '1') ss[i] = 1;
        }
        

        bool ans = false;
        if(int(ss[0]) || int(ss[n-1])) ans = true;
        else{
            for (int i = 1; i < n-1; i++){
                if(ss[i] && ss[i-1]){
                    ans = true;
                    break;
                }
            }
        }
        (ans) ? cout << "YES" << endl : cout << "NO" << endl;
        // (c1 >= c0) ? cout << "YES" << endl : cout << "NO" << endl;
        
    }
    


    return 0;
}

