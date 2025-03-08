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
        int n;
        cin >> n;

        vector<lli> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        lli c = 0;
        lli sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > c ) sum += arr[i] - c;
            c = arr[i];
        }

        cout << sum - 1 << endl;
    }
    
    return 0;
}
