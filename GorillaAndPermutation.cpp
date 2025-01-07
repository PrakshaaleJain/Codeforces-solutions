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
        int n,m,k;
        cin >> n >> m >> k;


        vector<int> arr(n);
        // arr[0] = n;
        // arr[n - 1] = m; 
        // for (int i = n - 1; i >= 0; i--){
        //     if(i = n - )
        //     arr[i] = n - i;
        // }

        for(int i = 0; i < n; i++){
            if( i == n - m) break;
            arr[i] = n - i;
        }

        for(int i = n - m; i < n; i++){
            arr[i] = i + 1 - n + m;
        }
        
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        

    }
    
    return 0;
}
