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

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }


        bool ans = true;
        for (int i = 1; i < n; i++){
            int diff = abs(arr[i] - arr[i-1]);
            if(diff != 5 && diff != 7){
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
        
        
        
    }
    
    
    return 0;
}