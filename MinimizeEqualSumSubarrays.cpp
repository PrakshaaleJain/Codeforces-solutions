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

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // for(int i = n - 1; i >= 0; i--){
        //     cout << arr[i] << " ";
        // }

        for(int i = 1; i <= n; i++){
            if(i%n == 0)
                cout << arr[0] << " ";
            else
                cout << arr[i] << " ";
        }
        
        cout << endl;

    }
    return 0;
}
