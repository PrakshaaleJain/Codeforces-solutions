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
    int n;
    cin >> n;
    
    bool ans = true;
    while(n--){
        int v;
        cin >> v;
        if(v == 1){
            ans = false;
            break;
        }
    }    

    cout << ((ans) ? "EASY" : "HARD") << endl;  
    return 0;
}
