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

    int n;
    cin >> n;


    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int diff = 0;
    for (int i = 1; i < n; i += 2){
        diff += (arr[i] - arr[i-1]);
    }
    

    cout << diff << endl;

    
    
    return 0;
}