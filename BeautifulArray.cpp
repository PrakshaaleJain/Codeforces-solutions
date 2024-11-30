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

    int a,b;
    cin >> a >> b;

    if(a == b)
        cout << 1 << endl << a << endl;
    else{
        vector<int> v;
        v.pb(b);
        v.pb(b);
        v.pb(3*a-2*b);
        cout << 3 << endl;
        for (int i = 0; i < 3; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }

    
    return 0;
}