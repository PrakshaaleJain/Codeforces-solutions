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
    
    int  t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.length();

        // if(s == "()")
        //     cout << "NO" << endl;
        // else if(s == ")(" || s.find("()") ){
        //     cout << "YES"  << endl << "(())" << endl;
        // }
        // else{
        //     cout << "YES" << endl;
        //     string t = "";
        //     for(int i = 0; i < n; i++)
        //         t += "()";
        //     cout << t << endl;
        // }

        // auto r = s.find("()");

        // if(s == "()")
        //     cout << "NO" << endl;
        // else if(r != string::npos){

        // }

        string a,b;
        for (int i = 0; i < 2*n; i++){
            (i%2 == 0)? a += "()" : b += ")(";
        }

        if(a.find(s) == string::npos)
            cout << "YES" << endl << a << endl;
        else if(b.find(s) == string::npos)
            cout << "NO" << endl << b << endl;
        else
            cout << "NO" << endl;

        

    }
    
    return 0;
}
