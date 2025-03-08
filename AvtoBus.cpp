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
        lli n;
        cin >> n;

        if(n<=6){
            cout << 1 << " " << 1 << endl;
            continue;
        }

        if(n%2){
            cout << -1 << endl;
            continue;
        }

        lli maxi = 0, mini = LONG_LONG_MAX;
        lli temp = n / 2;
        // if(temp%2 == 1){
        //     maxi = max(maxi, (temp - 3)/2);
        //     mini = min(mini, (temp - 2)/3);
        // }
        // else{
        //    maxi = max(maxi, temp / 2);
        //    mini = min(mini, temp / 3);
        // }

        // cout << mini << " " << maxi<< endl;

        if(n%2==1 || n<4) cout<<-1<<endl;
        else
        {
            mini = n/6;
            if(n%6!=0) mini++;
            
            maxi = n/4;

            cout<<mini<<" "<<maxi<<endl;
        }



    }
    
    return 0;
}
