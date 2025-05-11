#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i,n) for(int i = 0; i < n; i++)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif
    
    int  t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> arr(n);
        forn(i,n)
            cin >> arr[i];
        
        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i-1])
            arr.erase(arr.begin() + i);
        }

        set<int> st;
        for(int i = 1; i < arr.size(); i++)
            st.insert(abs(arr[i] - arr[i-1]));
        
        cout << st.size() << endl;

    }
    
    return 0;
}