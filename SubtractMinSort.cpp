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
        for(int i = 0;i <n; i++)
            cin >> arr[i];
        
            
            
        bool flag = true;
        if(n == 2){
            if(arr[0] > arr[1]) 
                flag = false;
        }
        else{

        for(int i = 1; i < n - 1; i++){
            if(arr[i - 1] > arr[i] && arr[i] > arr[i + 1]){
                flag = false;
                break;
            }
        }
        }

        cout << ((flag) ? "YES" : "NO") << endl;
        
        
    }
    
    return 0;
}
