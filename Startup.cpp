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

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> cost(k, 0);

        for (int i = 0; i < k; i++){
           int b, c;
           cin >> b >> c;
           cost[b - 1] += c;
        }

        sort(cost.rbegin(), cost.rend());
        
        int profit = 0;
        for (int i = 0; i < min(n,k); i++){
            profit += cost[i];
        }

        cout << profit << endl;
    }

    return 0;
}