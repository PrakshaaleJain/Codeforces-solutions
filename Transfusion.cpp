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

        lli odd = 0, even = 0;
        for (int i = 0; i < n; i++){
            if(i%2 == 0)
                even += arr[i];
            else
                odd += arr[i];
        }
        
        lli odd_len = n / 2, even_len = n / 2;
        if(n%2 == 1)
            even_len++;
        
        
        if(even % even_len != 0 || odd % odd_len != 0 || even / even_len != odd / odd_len){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
    
    return 0;
}