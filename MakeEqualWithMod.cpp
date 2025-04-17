#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i,n) for(int i = 0; i < n; i++)

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

        vector<int> arr(n);
        forn(i,n)
            cin >>arr[i];

        sort(arr.begin(), arr.end());

        bool pres1 = false, pres0 = false;
        forn(i,n){
            if(arr[i] == 1)
                pres1 = true;
            else if(arr[i] == 0)
                pres0 = true;
        }


        if(pres1 & pres0){
            cout << "NO" << endl;
            continue;
        }
            

        if(pres1){
            bool flag = true;
            for(int i = 1; i < n; i++){
                if(arr[i] - arr[i-1] == 1)
                    flag = false;
            }
            cout << ((flag) ? "YES" : "NO") << endl;
            continue;
        }

        cout << "YES" << endl;


        


        

    }
    
    return 0;
}