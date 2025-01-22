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

        if(n == 1)
            cout << 1 << endl << 1 << " " << 2 << endl;
        else{   
            cout << n - 1 << endl;
            for(int i = 0; i < n - 1; i+= 3){
                cout << i + 2 << " " << i + 3 << endl;
            }
        }


    }
    
    return 0;
}
