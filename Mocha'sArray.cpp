#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);  
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        vector<bool> ans1(n, true);
        vector<bool> ans2(n, true);

        if(arr[0] == 1){
            cout << "Yes" << endl; 
            continue;
        }


        vector<int> nondiv;
        for (int i = 0; i < n; i++) {
            if (arr[i] % arr[0] != 0) {
                nondiv.pb(arr[i]);
            }
        }

        if(nondiv.size() == 0){
            cout <<"Yes" << endl;
            continue;
        }


        bool res = true;
        for (int i = 0; i < nondiv.size(); i++) {
            if (nondiv[i] % nondiv[0] != 0) {
                res = false;
            }
        }

        cout << (res ? "Yes" : "No") << endl;
    }

    return 0;
}
