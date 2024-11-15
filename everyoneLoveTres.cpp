#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int t;
    cin >> t;

    while (t--){
        int n; 
        cin >> n;
        
        string s = "66";
        string ss = "363";
        if (n == 1 || n == 3)
            s = "-1";
        else if(n%2 == 0){
            for(int i = 0;i < n - 2; i++)
                s.insert(s.begin(), '3');
        }
        else{
            s.insert(0, ss); // index used for strings
            for (int i = 0; i < n - 5; i++)
                s.insert(s.begin(), '3'); // position used for characters.
        }
        
        cout << s << endl;
    }
    
    
    return 0;
}