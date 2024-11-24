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

        vector<int> odd,even;
        for (int i = 1; i <= n; i++){
            (i%2 == 0) ? even.push_back(i) : odd.push_back(i);
        }

        // for (int i = 0; i < even.size(); i++)
        //     ans.push_back(even[i]);

        // int last = even[even.size()-1];
        // int start = 0;
        // for (int i = 1; i <= n; i+=2){
            
        // }
        vector<int> ans;
        if(n < 5)
            cout << -1 << endl;
        else{
            even.erase(even.begin() + 1);
            even.push_back(4);

            odd.erase(odd.begin() + 2);
            odd.insert(odd.begin(), 5);

            ans.insert(ans.end(), even.begin(), even.end());
            ans.insert(ans.end(), odd.begin(), odd.end());

            for (int i = 0; i < ans.size(); i++)
                    cout << ans[i] << " ";
            cout << endl;   
        }

          

        
    }
    
    
    return 0;
}