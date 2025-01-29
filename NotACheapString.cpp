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
        int p;
        string s;
        cin >> s >> p;

        int n = s.length();
        string str(s);
        sort(str.rbegin(), str.rend());

        int cost = 0;
        for(int i = 0; i < n; i++)
            cost += (str[i] - 'a' + 1);
        
        unordered_map<char,int> del;
        for(int i = 0; i < n; i++){
            if(cost > p){
                del[str[i]]++;
                cost -=  str[i] - 'a' + 1;
            }
        }

        for(int i = 0; i < n; i++){
            if(del[s[i]] > 0){
                del[s[i]]--;
                continue;
            }
            cout << s[i];
        }

        cout << endl;




        

    }
    
    return 0;
}
