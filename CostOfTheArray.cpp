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

        vector<int> arr(n);
        for(int i =0; i < n; i++)
            cin >> arr[i];

        if(n == k){
            // vector<int> b;
            // for(int i = 1; i < n; i+=2)
            //     b.pb(arr[i]);

            // bool found = false;
            // for(int i = 1; i <= b.size(); i++){
            //     if(b[i-1] != i){
            //         cout << i << endl;
            //         found = true;
            //         break;
            //     }
            // }
            // if(found)
            //     continue;
            // else{
            //     cout << b.size() + 1 << endl;
            // }

            int ans = 1;
            bool found = false;
            for (int i = 1; i <= n; i+=2) {
                // if (arr[i] != i) {
                //     ans = i;
                //     found = true;
                //     break;
                // }

                if(arr[i] == ans){
                    ans++;
                }
                else    break;


            }

                cout << ans << endl;
            


        }
        else{

            int diff = n - k;
            bool found = false;
            int ans = 0;
            for (int i = 1; i <= diff + 1; i++) {
                if (arr[i] != 1) {
                    // ans = i;
                    found = true;
                    break;
                }
            }

            if(found)
                cout << 1 << endl;
            else{
                cout << 2 << endl;
            }
            
            // if(found)
            //     cout << ans << endl;
            // else    
            //     cout <<  << endl;





            // int diff = n - k;
            // vector<int> b;

            // // for(int i = 0; i < diff + 1; i++)
            // //     b.pb(arr[i]);

            // // for(int i = 1 ; i < b.size(); i++){
            // //     if(arr[i] != arr[i-1])

            // // }

            // int temp = diff;
            // for(int i = diff; i < n; i+=2){
            //     b.pb(arr[i]);
            //     if(arr[i] == arr[i + 1] && i != n - 1){
            //         b.pb(arr[i+1]);
            //         i++;
            //         temp--;
            //     }

            // }
            
            // bool found = false;
            // for(int i = 0; i < b.size(); i++){
            //     if(b[i] != i + 1){
            //         cout << i << endl;
            //         found = true;
            //         break;
            //     }
            // }

            // if(found)
            //     continue;
            // else    cout << b.size() + 1 << endl; 


            // b[0].pb(arr[0]);

            // if(arr[0] != 1){
            //     cout << 1 << endl;
            //     continue;
            // }


            // for(int i = 1; i <= diff+1; i++){
            //     b.pb(arr[i]);
            // }   
            
            // bool found = false;
            // for(int i= 1; i <= b.size(); i++){
            //     if(b[i-1] != i){
            //         cout << i << endl;
            //         found = true;
            //         break;
            //     }
            // }

            // if(found)
            //     continue;
            // else{   
            //     bool found = false;
            //     for(int i= diff + 1 + 1; i < n; i+=2){
            //         if(arr[i] != (i - diff - 1)){
            //             cout << i - diff - 1 << endl;
            //             found = true;
            //             break;
            //         }
            //     }

            //     if(found)
            //         continue;
            //     else
            //         cout << 0 << endl;
            // }


            


        }


    }
    
    return 0;
}
