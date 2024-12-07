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
        int n, m;
        cin >> n >> m;

        vector<string> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];


        string s = "";
        int l = 0;


        for (int i = 0; i < n; i++){
            string val = v[i];
            int l_val = val.length();

            l += l_val;
            if(l <= m)
                cnt++;
            else{
                break;
            }
        }
        cout << cnt << endl;
    }   
    
    return 0;
}