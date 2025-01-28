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
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i< n; i++)
            cin >> arr[i];

        // sort(arr.begin(), arr.end());
        // // int sum = arr[0];
        // int sum = 0;
        // for(int i = 0; i < n; i++){
        //     sum += arr[i];
        //     prefix[i] = sum;
        // }

        // int revsum = 0;
        // for (int i = n - 1; i >= 0; i--){
        //     revsum += arr[i];
        //     suffix[i] = revsum;
        // }

        // int cnt = 0;
        // for(int i = 0; i < n; i++){
        //     if((prefix[i] + arr[i]) == suffix[i])   
        //         cnt++;
        // }

        // cout << cnt << endl;


        long long sum = 0;
		int maxi = 0, ans = 0;;
		for(int i = 0; i < n; i++){
			sum += arr[i];
			maxi = max(maxi, arr[i]);
			if(sum - maxi == maxi) 
				ans++;
		}
		cout << ans << endl;
        

    }
    
    return 0;
}
