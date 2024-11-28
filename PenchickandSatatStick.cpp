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

        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool ans = true;
        for (int i = 0; i < n - 1; i++){
            if(a[i] != i + 1){
                if(a[i + 1] == i + 1 && a[i] == i + 2)
                    swap(a[i], a[i + 1]);
                else
                    ans = false;
            }
        }
        (ans) ? cout << "YES" << endl : cout  << "NO" << endl;
    }
    
    
    return 0;
}