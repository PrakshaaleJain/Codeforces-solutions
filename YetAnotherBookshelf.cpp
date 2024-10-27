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

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // int diff = 0;
        // bool c = 0;
        // for (int i = 0; i < n; i++){
        //     if(arr[i] == 1 && c == 0)
        //         c == 1;
        //     else

        //     if(c == 1 && arr[i] == 0)
        //         diff++;
            

        // }

        vector<int> index;
        for (int i = 0; i < n; i++){
            if(arr[i] == 1)
                index.push_back(i);
        }


        int diff = 0;
        if(size(index) == 1)
            cout << 0 << endl;
        else{
            for (int i = 1; i < size(index); i++){
                diff += abs(index[i] - index[i-1]) - 1;
            }
            cout << diff << endl;
        }
    }
    


    return 0;
}