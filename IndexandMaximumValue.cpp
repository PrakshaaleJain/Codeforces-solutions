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
        int n,m;
        cin >> n >> m;

        vector<int> arr(n);
        int maxi = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }


        for (int i = 0; i < m; i++){
            char sign;
            int l, r;
            cin >> sign >> l >> r;
            

            // int maxi = 0;
            // for (int j = 0; j < n; j++){
            //     if(arr[j] >= l && arr[j] <= r){
            //         if(sign == '+') arr[j]++;
            //         else    arr[j]--;
            //     }

            //     maxi = max(maxi,arr[j]);
            // }
            // cout << maxi << " ";

            if(maxi >= l && maxi <= r){
                    if(sign == '+') maxi++;
                    else    maxi--;
            }

            cout << maxi << " ";
        }
        cout << endl;
        
        // for (int i = 0; i < n; i++){
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        
        

    }
    
    return 0;
}
