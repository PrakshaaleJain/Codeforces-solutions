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
    
    int  t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool ans = true;
        if(n%2 == 0){
            for(int i = 0; i < n/2 - 1; i++){
                if(a[i] > a[i+1]){
                    ans = false;
                    break;
                }

                if(a[n - 1 - i] > a[n - 2 - i]){
                    ans = false;
                    break;
                }
            }
        }
        else{
            for (int i = 0; i < n/2; i++){
                if(a[i] < a[i + 1]){
                    ans = false;
                    break;
                }

                if(a[n - 1 - i] > a[n - 2 - i]){
                    ans = false;
                    break;
                }
            }
            
        }



        (ans) ? cout << "YES" << endl : cout << "NO" << endl;

    }
    
    return 0;
}