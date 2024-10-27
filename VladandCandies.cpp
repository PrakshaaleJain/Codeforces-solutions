#include <bits/stdc++.h>
using namespace std;

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

        sort(arr.begin(), arr.end());
        if(n == 1){
            if(arr[0] == n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else{
            if(arr[n-1] - arr[n-2] > 1)
                cout << "NO" << endl;   
            else
                cout << "YES" << endl;
        }

        
    }
    
    
    return 0;
}