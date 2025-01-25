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
        int n,k;
        cin >> n >> k;

        vector<int> arr(n,0);
        for(int i = k - 1; i < n; i += k)
            arr[i] = (i+1)/k;
        
        int num = n;
        for(int i =0; i < n; i++){
            if(arr[i] == 0){
                arr[i] = num;
                num--;
            }
            
        }

        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        

        
    }
    
    return 0;
}
