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
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];


        int ans = INT_MAX;
        for(int i = 0; i < n; i++){
            int val = arr[i];
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(j < i){
                    cnt++;
                    continue;
                }

                if(arr[j] > arr[i])
                    cnt++;
            }

            ans = min(cnt, ans);
        }

        cout << ans << endl;


    }
    
    return 0;
}
