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

    int n;
    cin >> n;

    int p = 0;
    int b = 0;
    while(n--){
        char c;
        int x;

        cin >> c >> x;
        if(c == 'P')
            p += x;
        else{
            b = x;
            if(p > b){
                p -= b;
                b = 0;
            }
            else{
                b -= p;
                p = 0;
            }

            (b >= 1) ? cout << "YES" << endl : cout << "NO" << endl;
            
        }

        



    }
    
    return 0;
}