#include <bits/stdc++.h>
#include<numeric>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back

lli lcm(lli a, lli b){
    lli max_num= max(a,b); 
    while (1){  
         // if statement checks max_num is completely divisible by a and b.  
        if(max_num % a == 0 && max_num % b == 0){  
            return max_num; 
        }  
        ++max_num; // increment by 1 on each iteration  
    } 

    return 0;
}

lli gcd(lli a, lli b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}


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
        lli a,b;
        cin >> a >> b;

        // lli l = lcm(a,b);

        // if(l != a && l != b){
        //     cout << l << endl;
        //     continue;
        // }
        // // else{
        // //     cout << a * b << endl;
        // // }
        // // else if(l == a){
        // //     l *= a;
        // //     cout << l << endl;
        // //     continue;
        // // }
        // // else{
        // //     l *= b;
        // //     cout << l << endl;
        // //     continue;
        // // }
        // else{
        //     l *= (max(a,b) / min(a,b));
        //     cout << l << endl;
        // }

        lli k = min(a,b);
        lli l = max(a,b);

        // double f = l / (float)k;
        lli m = l % k;
         
        if(m == 0){
            cout << l * (l/k) << endl;
            continue;
        }

        cout << (k * l) / gcd(k,l) << endl;


        // if(floor(f) != f)
        //     cout << 1LL * k * l << endl;
        // else
        //     cout << 1LL * f * l << endl;

        
    }
    
    return 0;
}
