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
        int  n,m,r,c;
        cin >> n >> m >> r >> c;

        // long long int sum = 2*n*m -1 - m;
        // long long int rsum = 0;

        // for (int i = 0; i < n; i++){
        //     if(i == c-1){

        //     }
        //     else   
        //         for (int j = 0; j < m; i++)
        //             rsum += 
            
        // }

        long long int rsum = (n-r)*1ll*(m-1) + (m-c);
        long long int dsum = (n-r)* 1ll*m;

        // if(r == 1 && c == 1)
        //     rsum == 

        // if(r == n || c == m) 
        //     sum++;(m-1)

        cout << dsum + rsum << endl;
        
    }
    
    
    return 0;
}