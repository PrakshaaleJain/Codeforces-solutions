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
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int k = 0;
        int r = 1;

        vector<int> v;
        for (int i = 1; i < n; i++){
            v.push_back(arr[i] - arr[i-1]);
        }

        sort(v.begin(), v.end());
        int temp = v[0];
        for(int i = 1; i < v.size(); i++){
            int ans = v[i];
            for (int j = 1; j < n; j+= 2){
                if(arr[j - 1] + v[i] < arr[j]){
                    if(j + 2 > n - 1){break;}
                    if(arr[j - 1] + v[i] < arr[j]){
                        if(r == 1)
                            r--;
                        else{
                            continue;
                        }
            }   
                }   
            }
            

            temp = min(ans, temp);
        }
        cout << temp << endl;




    }
    
    
    return 0;
}