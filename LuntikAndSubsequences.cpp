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
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int cnt1 = 0, cnt0 = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 1) cnt1++;
            else if(arr[i] == 0) cnt0++;
        }

        lli res = (1LL << cnt0) * cnt1;
        cout << res << endl;
         
        
    }
    
    return 0;
}
