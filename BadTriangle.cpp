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

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int arr[n];
        for (int a = 0; a < n; a++){
            cin >> arr[a];
        }

        int i,j,k;
        i = 1;
        j = 2;
        k = n - 1;
        if(arr[0] + arr[1] < arr[k])
            cout << 1 << " " << 2 << " " << k + 1 << endl;
        else
            cout << -1 << endl;
    }
    
    
    return 0;
}