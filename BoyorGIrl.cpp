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


    string s;
    cin >> s;

    int n = s.length();
    set<char> st;

    for (int i = 0; i < n; i++){
        st.insert(s[i]);
    }

    if(st.size() %2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
        
    
    
    
    return 0;
}