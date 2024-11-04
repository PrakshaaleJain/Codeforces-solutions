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
    
    int a ,b;
    cin >> a >> b;
    int count = 0;

    while (a <= b){
        a *= 3;
        b *= 2;
        count++;
    }
    
    cout << count << endl;


    return 0;
}
