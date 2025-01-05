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
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // vector<int> pre_sum(n + 1, 0);
        // for(int i = 0; i < n; i++){
        //     pre_sum[i+1] = pre_sum[i] + arr[i];
        // }



        // set<int> st;
        // st.insert(0);

        // // int l = 0, r = n - 1;
        // // while (l <= r){
        // //     int sum = 0;
        // //     for(int i = l; i <= r; i++){
        // //         sum += arr[i];
        // //         st.insert(sum);
        // //     }
        // //     l++;
        // // }



        // for (int i = 0; i < n; i++){
        //     for(int j = i + 1; j <= n; j++){
        //         st.insert(pre_sum[j] - pre_sum[i]);
        //     }
        // }

        // // vector<int> v(st.begin(), st.end());
        // // sort(v.begin(), v.end());

        // // cout << v.size() << endl;
        // // for(int i = 0; i < v.size(); i++){
        // //     cout << v[i] << " ";
        // // }
        // // cout << endl;

        // cout << st.size() << endl;
        // for( auto& x: st){
        //     cout << x << " ";
        // }
        // cout << endl;


        int c1 = 0, cneg1 = 0, other = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 1)
                c1++;
            else if(arr[i] == -1)
                cneg1++;
            else    
                arr[i] = other;
        }

        set<int> st;
        st.insert(0);
        for(int i = 0; i < c1; i++){
            st.insert(other + i);
        }

        for(int i = 0; i < c1; i++){
            st.insert(other - i);
        }

        cout << st.size() << endl;
        for( auto& x: st){
            cout << x << " ";
        }
        cout << endl;
        



    }
    
    return 0;
}
