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
    
    int  t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int m;
        cin >> m;
        while(m--)  {
            string s;
            cin >> s;

            if(s.length() != n){
                cout << "NO" << endl;
                continue;
            }

            unordered_map<char,int> stoa;
            unordered_map<int,char> atos;
            bool flag = true;

            // bool ans = true;
            // for(int i = 0; i < n; i++){
            //     if(stoa.find(s[i]) == stoa.end() && atos.find(arr[i]) == atos.end()){
            //         stoa[s[i]] = arr[i];
            //         atos[arr[i]] = s[i];
            //     }
            //     else if((stoa.find(s[i]) == stoa.end() && atos.find(arr[i]) != atos.end()) || (stoa.find(s[i]) != stoa.end() && atos.find(arr[i]) == atos.end())){
            //         flag = false;
            //         break;
            //     }

            // }            


            for (int i = 0; i < n; i++) {
                if ((atos.count(arr[i]) && atos[arr[i]] != s[i]) || (stoa.count(s[i]) && stoa[s[i]] != arr[i])) {
                    flag = false;
                    break;
                }
                atos[arr[i]] = s[i];
                stoa[s[i]] = arr[i];
            }

            cout << ((flag) ? "YES" : "NO") << endl;

        }

    }
    
    return 0;
}
