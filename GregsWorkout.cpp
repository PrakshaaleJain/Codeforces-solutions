#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif


    int n;
    cin >> n;
    int a1, a2, a3;
    a1 = a2 = a3 = 0;
    int m;
    for (int i = 0; i < n; i++){
        cin >> m;
        if(i%3 == 0)
            a1 += m;
            // mp["chest"] += arr[i];
        else if (i%3 == 1)
            a2 += m;
            // mp["biceps"] += arr[i];
        else
            a3 += m;
            // mp["back"] += arr[i];
    }

    int t = max(a1, max(a2,a3));
    if(t == a1)
        cout << "chest";
    else if(t == a2)
        cout << "biceps";
    else
        cout << "back";
    
    return 0;
}