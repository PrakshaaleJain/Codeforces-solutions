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
    
    int n, h, x;
    cin >> n >> h;
	int ans = n;
	for (int i = 0; i < n; i++){
		cin >> x;
		ans += (x>h);
	}
	cout << ans << endl;
    
    return 0;
}
