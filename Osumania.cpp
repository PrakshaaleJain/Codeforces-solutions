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

        char arr[n][4];
        vector<int> v;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < 4; j++){
                cin >> arr[i][j];
            }
        }


        for(int i = n - 1; i >= 0; i--){
            for (int j = 0; j < 4; j++){
                if(arr[i][j] == '#')
                    v.pb(j + 1);
            }
        }


        for (int i = 0; i < n; i++){
            cout << v[i] << " ";
        }

        cout << endl;
        


        
        

    }
    
    return 0;
}
