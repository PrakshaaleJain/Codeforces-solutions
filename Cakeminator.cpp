#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif

    int r,c;
    cin >> r >> c;

    char arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    int t_r, t_c;
    t_c = t_r = 0;

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if(arr[i][j] == 'S'){
                t_r++;
                t_c++;
                break;
            }
        }
    }

    t_r = r - t_r;
    t_c = c - t_c;

    cout << c*t_r + r*t_c - t_r*t_c;
    
    
    return 0;
}