#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back

// completed using editorial

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

        // vector<int> x(n);
        // for (int i = 2; i < n; i++){
        //     cin >> x[i - 2];
        // }

        // vector<int> arr(n + 1,0);
        // arr[1] = x[2] + 1;
        // for(int i = 2; i <= n; i++){
        //     // int mul = 1;
        //     // while(mul * arr[i-1] < x[i])
        //     //     mul++;
            
        //     // arr[i] = mul*arr[i-1] + x[i];
        //     // lli mul = (x[i] / arr[i-1]) + 1;
        //     // arr[i] = mul * arr[i-1] + x[i];




        // }


        // for(int i = 1; i <= n; i++){
        //     cout << arr[i] << " ";
        // }
        // cout << endl;

        int S=1000;
		cout<<S<<" ";
		for(int i=2;i<=n;i++){
			int x;
			cin>>x;
			S+=x;
			cout<<S<<" ";
		}
		cout<<"\n";

            
    }
    
    return 0;
}
