#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int i = 0; i < n; i++){
            cin >> arr1[i];
        }

        arr2 = arr1;
        sort(arr1.begin(),arr1.end());

        bool ans = true;
        for (int i = 0; i < n; i++){
            if(arr1[i]%2 == 0 && arr2[i]%2 == 1 || arr1[i]%2 == 1 && arr2[i]%2 == 0){
                ans = false;
            }
        }

        if(ans)
            cout << "YES"<< endl;
        else
            cout << "NO" << endl;
        
        

        
    }
    
    return 0;
}