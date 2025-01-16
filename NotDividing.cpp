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
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            if(arr[i] == 1) arr[i]++;
        }

        for(int i = 1; i < n; i++){
            if(arr[i] % arr[i-1] == 0)
                arr[i]++;
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;




        
    }
    
    return 0;
}
