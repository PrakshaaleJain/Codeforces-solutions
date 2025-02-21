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
        int n;
        cin >> n;

        set<int> st;
        for(int i = 1; i <= n; i++)
            st.insert(i);

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // unordered_map<int,int> mp;
        vector<int> b;
        for(int i = 0; i < n; i++){
            // if(mp[arr[i]] == 0){
            //     b.pb(arr[i]);
            //     mp[arr[i]]++;
            // }
            // else{
            //     maxi++;
            //     b.pb(maxi);
            // }

            if (st.find(arr[i]) != st.end()) {  
                // First occurrence of the element
                b.pb(arr[i]);
                st.erase(arr[i]);
            } else { 
                // Duplicate element, replace with the smallest available number
                b.pb(*st.begin());
                st.erase(st.begin()); // Erase the smallest element
            }
        }
        
        for(int i = 0; i < n; i ++)
            cout << b[i] << " ";
        cout << endl;
        
    }
    
    return 0;
}