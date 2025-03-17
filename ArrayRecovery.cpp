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

        vector<int> d(n);
        for (int i = 0; i < n; i++)
            cin >> d[i];

        vector<int> a(n);
        a[0] = d[0];

        bool flag = true;
        for(int i = 1; i < n ; i++){
            if(a[i-1] >= d[i] && d[i] != 0){
                cout << -1;
                flag = false;
                break;
            }
            else{
                a[i] = d[i] + a[i-1];
            }
        }
        
        if(flag)
            for(int i =0; i < n; i++)
                cout << a[i] << " ";
        cout << endl;



    }
    
    return 0;
}