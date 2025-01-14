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
    string s;
    cin >> n >> s;

    int a = 0,d = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == 'A') a++;
        else    d++;
    }

    if(a > d)
        cout << "Anton" << endl;
    else if(d > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    
    
    return 0;
}
