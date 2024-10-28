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

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        double a = 0;
        double b = arr[n-1];
        for (int i = 0; i < n - 1; i++){
            a += (double)arr[i];
        }

        a /= n-1;
        cout << fixed << setprecision(9) << (a + b) << endl;
    }
    
    
    return 0;
}