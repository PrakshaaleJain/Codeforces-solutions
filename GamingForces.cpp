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

        vector<int> arr(n);
        int count = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];

            if(arr[i] == 1)
                count++;
        }
        
        // sort(arr.begin(), arr.end());
        if(count%2 == 0)
            cout << (n - count) + count/2 << endl;
        else{
            cout << (n - count) + count/2 + 1 << endl;
        }


    }
    return 0;
}