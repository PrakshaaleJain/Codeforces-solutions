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

        // set<int> square;
        // for(int i = 1; i*i < 1e9; i += 2){
        //     square.insert(i*i);
        // }

        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += arr[i];
            float sq = sqrt(float(sum));

            if(sq == floor(sq) && sum%2 == 1)
                cnt++;
        }   
        
        cout << cnt << endl;

        
        
    }
    
    return 0;
}