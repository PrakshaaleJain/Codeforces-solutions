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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int first = -1, freqlast = 0;
        for(int i = n - 1; i >= 0; i--){
            if(arr[i] == arr[n - 1]){
                freqlast++;
                if(freqlast == k){
                    first = i;
                    break;
                }
            }
        }

        int last = -1, freqfirst = 0;
        for (int i = 0; i < n; i++){
            if(arr[i] == arr[0]){
                freqfirst++;
                if(freqfirst == k){
                    last = i;
                    break;
                }
            }
        }


        if(freqfirst >= k && freqlast >= k && first >= last)
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;

    }
    
    return 0;
} 
