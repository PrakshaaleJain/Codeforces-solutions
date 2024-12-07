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
        string s;
        cin >> s;

        int sum = 0;
        int d2 = 0, d3 = 0;
        for (int i = 0; i < s.length(); i++){
            sum += s[i] - '0';
            if(s[i] == 2) d2++;
            if(s[i] == 3) d3++;
        }
        

        bool ans = false;
        // if(sum % 9 == 0)
        //     ans =  true;
        // else{
        //     for (int i = 0; i < s.length(); i++){
        //         int val = s[i] - '0';
        //         if( val*val < 10){
        //             lli n_sum = sum - val - val*val;
        //             if(n_sum % 9 == 0){
        //                 ans = true;
        //                 break;
        //             }
        //         }
        //     }
        // }
        
        int tt = (-sum)%9;
        for (int i = 0; i <= 2 && i <= d3; i++){
            int temp = tt - 6*i;
            int rr = (5*temp)%9;

            if(rr < 0) rr += 9;
            if(rr <= d2){
                ans = true;
                break;
            }
        }
        



        (ans) ? cout << "YES" << endl : cout << "NO" << endl;



    }
    return 0;
}