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

    string s = "";
    for(int i = 0; i < t; i++){
        s += "I ";
        if(i%2 == 0)
            s += "hate ";
        else
            s += "love ";
        
        if(i != t - 1)
            s += "that ";
        else
            s += "it";
    }

    cout << s << endl;
    
    return 0;
}
