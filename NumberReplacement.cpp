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

        unordered_map<int, char> mp;
        int arr[n];
        string s;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]] = '0';
        }

        cin >> s;

        bool ans = 1;
        for (int i = 0; i < n; i++){
            if(mp[arr[i]] != s[i] && mp[arr[i]] != '0'){
                ans = 0;
                break;
            }
            else{
                mp[arr[i]] = s[i];
            }
        }

        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
        


        
    }
    

    
    return 0;
}