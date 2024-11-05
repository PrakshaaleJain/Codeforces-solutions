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

    int t;
    cin >> t;

    while (t--){
        string num = "1100";
        string s;
        cin >> s;
        int l = s.size(); 

        int n;
        cin >> n;

        // for (int i = 0; i < n; i++){
        //     int in;
        //     char v;
        //     cin >> in >> v;
        //     s[in - 1] = v;

            
        // }   

        int count = 0;
        for (int i = 0; i < l - 3; i++){
            if(s.substr(i,4) == num)
                count++;
        }

        while (n--){
            int in, v;
            cin >> in >> v;
            in--;
            
            for (int i = in - 3; i <= in; i++){
                if(i < 0 || i+3  >= l)
                    continue;
                if(s.substr(i,4) == num)
                    count--;
            }

            s[in] = '0' + v; // converting int to character
            for (int i = in - 3; i < in + 1; i++){
                if(i < 0 || i+3  >= l)
                    continue;
                if(s.substr(i,4) == num)
                    count++;
            }
            if(count > 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }           
    }
    
    
    return 0;
}