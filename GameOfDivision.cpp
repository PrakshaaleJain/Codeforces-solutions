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
        int n,k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        vector<int> rem(k);
        for(int i = 0; i< n; i++){
            rem[arr[i] % k]++;
        }

        bool ans = false;
        int r = 0;
        for(int i = 0; i < k; i++){
            if(rem[i] == 1){
                ans = true;
                r = i;
                break;
            }
        }

        if(ans){
            cout << "YES" << endl;
            for(int i = 0; i < n; i++){
                if(arr[i] % k == r){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
        else
            cout << "NO" << endl;



    }
    
    return 0;
}
