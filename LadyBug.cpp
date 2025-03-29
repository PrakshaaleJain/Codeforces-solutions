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
        string a, b;
        cin >> n >> a >> b;

        bool f1 = true;
        forn(i,n){
            if(a[i] == '1'){
                f1 = false;
                break;
            }
        }

        if(f1){
            cout << "YES" << endl;
            continue;
        }

        int count0_path1 = 0, count1_path1 = 0;
        for(int i = 0; i < n; i++){
            if(i%2 == 0 && a[i] == '1'){  //a 
                count1_path1++;
            }
            else if(i%2 == 1 && b[i] == '0') // b
                count0_path1++;
        }

        int count0_path2 = 0, count1_path2 = 0;
        for(int i = 0; i < n; i++){
            if(i%2 == 0 && b[i] == '0'){ //b
                count0_path2++;
            }
            else if(i%2 == 1 && a[i] == '1') //a
                count1_path2++;
        }

        if(count1_path1 <= count0_path1 && count1_path2 <= count0_path2)
            cout << "YES" << endl;
        else    cout << "NO" << endl;



    }
    
    return 0;
}