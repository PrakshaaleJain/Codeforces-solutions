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
        for (int i = 0; i < n; i++)
            cin >> arr[i];  

        // vector<int> v = arr;
        // sort(v.begin(), v.end());

        // int c = 0;
        // for (int i = 0; i < n; i++){
        //     if(arr[i] == v[i]){
        //         c++;
        //     }
        // }
        
        // int ans = c - 1;
        // cout << ans << endl;

        int c = 0;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++){
            bool ans = false;
            for (int j = i + 1; j < n; j++){
                if(abs(arr[i] - arr[j]) == 1  && arr[j] < arr[i]){
                    c++;
                    swap(arr[i], arr[j]);
                    ans = true;

                    vector<int> temp;
                    temp.pb(i + 1);
                    temp.pb(j + 1);
                    v.pb(temp);
                }
            }   
            if(ans)
                i--;
        }

        cout << c << endl;
        for (int i = 0; i < v.size(); i++){
            for (int j = 0; j < 2; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        
                    
    }
    
    return 0;
}