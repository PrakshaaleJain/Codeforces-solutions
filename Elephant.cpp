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

    int count = n / 5;
    
    if(n%5 != 0)
        count++;
    cout << count << endl;
}