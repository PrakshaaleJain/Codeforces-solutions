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
        sort(arr.begin(), arr.end());

        int loss = 0;

        // not valid if a number repeats itself more than twice.
        // for (int i = 1; i < n; i++){
        //     if(arr[i - 1] < arr[i])
        //         win++;
        //     else{
        //         if(i != 1)
        //             win++;
        //     }
        // }

        int mn = INT_MAX;
        for (int i = 0; i < n; i++){
            mn = min(arr[i], mn);
        }
        

        loss = count(arr.begin(), arr.end(), mn);
        cout << n - loss  << endl;
        
    }
    
    
    return 0;
}