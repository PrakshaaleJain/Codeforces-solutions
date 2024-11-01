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
        int x,y,z;
        cin >> x >> y >> z;


        vector<int> v(3);
        v[0] = x;
        v[1] = y;
        v[2] = z;
        sort(v.begin(), v.end());

        if(v[1] != v[2])
            cout << "NO" << endl;
        else 
            cout << "YES\n" << v[0] << " " << v[0] << " " << v[2] << endl;
    }
    
    
    return 0;
}