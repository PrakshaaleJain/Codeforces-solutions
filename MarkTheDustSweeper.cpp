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

        vector<lli> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        lli cnt = 0;
        lli p =  0;
        while(arr[p] == 0 && p < n)
            p++;


        for(int i = p; i < n - 1; i++){
            if(arr[i] == 0) cnt++;
            cnt += arr[i];
        }

        cout << cnt << endl;

    }
    
    return 0;
}
