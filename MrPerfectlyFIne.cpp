#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int t;
    cin >> t;

    while(t--){
        int b;
        cin >> b;

        string skill = "00";
        int k = 2 * 1e5;
        unordered_map<string, int> mp;
        mp["00"] = mp["11"] = mp["10"] = mp["01"] = k;
        for (int i = 0; i < b; i++){
            string s;
            int time;
            cin >> time >> s;
            mp[s] = min(mp[s], time);
        }

        // if(mp["01"] + mp["10"] <= mp["11"] && mp["01"] + mp["10"] <= 2 * 1e5)
        //     cout << mp["01"] + mp["10"] << endl;
        // else if(mp["11"] <= mp["01"] + mp["10"] && mp["11"] != 2 * 1e5)
        //     cout << mp["11"] << endl;
        // else
        //     cout << "-1" << endl;

        // 

        if(min(mp["01"] + mp["10"], mp["11"]) >= (int)1e6)
            cout << -1 << endl;
        else
            cout << min(mp["01"] + mp["10"], mp["11"]) << endl;
    }
    
    return 0;
}