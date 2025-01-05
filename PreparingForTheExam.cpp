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
        int n,m,k;
        cin >> n >> m >> k;

        vector<int> nlist(n), mlist(m), klist(k);

        for(int i = 0; i < n; i++){
            nlist[i] = i + 1;
        }

        for (int i = 0; i < m; i++){
            cin >> mlist[i];
        }

        for(int i = 0; i < k; i++){
            cin >> klist[i];
        }

        string ans = "";
        for(int i = 0; i < m; i++){
            vector<int> temp(nlist.begin(), nlist.end());
            int rem_q = mlist[i];

            temp.erase(find(temp.begin(), temp.end(), rem_q));

            // if(temp == klist)
            //     ans += "1";
            // else    
            //     ans += "0";

            bool flag = true;
            for(int i = 0; i < temp.size(); i++){
                int val = temp[i];
                auto found = find(klist.begin(), klist.end(), val);

                if(found == klist.end()){
                    flag = false;
                    break;
                }
            }

            (flag) ? ans += "1" : ans += "0";

        }

        cout << ans << endl;

        

    }
    
    return 0;
}
