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
        int n,a,b,c;
        cin >> n >> a >> b >> c;

        int total = 0, cnt = 0;
        int sum = a + b + c;
        cnt += (n/sum)*3;

        for (int i = 0; i < 3; i++){


            if(total >= n%sum)
                break;
            if(i == 0) total += a;
            else if (i == 1) total += b;
            else total += c;
            cnt++;
        }
        

        cout << cnt << endl;

    }
    
    return 0;
}
