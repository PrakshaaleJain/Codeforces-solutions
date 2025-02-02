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

        vector<int> arr(n), b(n);
        set<int> s1, s2;
        for(int i =0; i <n; i++){
            cin >> arr[i];
            s1.insert(arr[i]);
        }
        
        for(int i =0; i <n; i++){
            cin >> b[i];
            s2.insert(b[i]);
        }


        // if(s1.size() >= 2 || s2.size() >= 2)
        //     cout << "YES" << endl;
        // else    
        //     cout << "NO" << endl;


        if(s1.size() > 2){
            cout << "YES" << endl;
        }
        else if(s1.size() == 2){
            if(s2.size() >= 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else{
            if(s2.size() > 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }




    }
    
    return 0;
}