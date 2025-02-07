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
        vector<int> arr(3);
        for(int i =0; i < 3; i++)
            cin >> arr[i];


        sort(arr.begin(), arr.end());
        if(arr[0] + arr[1] == arr[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    
    return 0;
}
