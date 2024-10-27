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

        int arr[n];
        for (int i = 0; i < n; i++){
            arr[i] = 6;
        }
        

        bool ans = false;
        if(n == 1)
            cout << -1 << endl;
        else if(n==2)
            cout << 66 << endl;
        else{
            for (int i = 0; i < n-2; i++){
            int odd = 0;
            int even = 0;
            for (int j = 0; j < n; i++){
                if(j%2 == 0)    odd += arr[j];
                else            even += arr[j];
            }

            if(abs(odd - even)%11 == 0){
                ans = true;
                break;
            }
            else{
                arr[i] = 3;
            }
            }
            
            if(ans)
                for (int i = 0; i < n; i++){
                    cout << arr[i];
                }
            else
                cout << -1;
                
            cout << endl;
        }
        
    }
    
    
    return 0;
}