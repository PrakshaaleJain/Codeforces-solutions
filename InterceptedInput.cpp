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
        int k;
        cin >> k;

        vector<int> arr(k);
        for (int i = 0; i < k; i++){
            cin >> arr[i];
        }

        int first = 0, second = 0;
        int dim = k - 2;
        sort(arr.begin(), arr.end());

        // use of twop pointers rather than 2 for-loops
        int l = 0, r = k - 1;
        while(l <= r){
            int n = arr[l];
            int m = arr[r];

            if(n*m > dim)
                r--;
            else if(n*m < dim)
                l++;
            else{
                first = n;
                second = m;
                break;
            }
        }
        

        cout << first << " " << second << endl;
        

        


    }
    
    
    return 0;
}