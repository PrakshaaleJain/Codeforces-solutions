#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back

pair<char, int> findEntryWithLargestValue(map<char, int> sampleMap){ 

    pair<char, int> entryWithMaxValue = make_pair(0, 0); 
 
    map<char, int>::iterator currentEntry; 
    for (currentEntry = sampleMap.begin(); 
        currentEntry != sampleMap.end(); 
        ++currentEntry) { 
            
        if (currentEntry->second 
            > entryWithMaxValue.second) { 
 
            entryWithMaxValue 
                = make_pair( 
                    currentEntry->first, 
                    currentEntry->second); 
        } 
    } 
 
    return entryWithMaxValue; 
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif
    
    int  t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        // string s1 = s;
        // sort(s1.begin(), s1.end());
        // int cnt = 0;

        // map<char, int>mp;
        // for (int i = 0; i < n; i++){
        //     mp[s[i]]++;
        // }

        // char cmin, cmax;
        // int min = 0;
        // int maxi = 10;
        // for (auto &m : mp){
        //     if(m.second > min){
        //         min = m.second;
        //         cmin = m.first;
        //     }
        //     if(m.second < maxi){
        //         maxi = m.second;
        //         cmax = m.first;
        //     }
        // }

        // if(min == maxi){
        //     for (int i = 0; i < n; i++){
        //         if(s[i] != cmax){
        //             s[i] = cmax;
        //             break;
        //         }
        //     }
        // }
        // else{
        //     for (int i = 0; i < n; i++){
        //         if(cmin == s[i]){
        //             s[i] = cmax;
        //             break;
        //         }
        //     }
        // }
        // cout << s << endl;     

        unordered_map<char,int>mp;
        for (int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        

        pair<char,int> max, min;
        int mm = 1 , mini = n - 1;
        for(auto &m : mp){
            if(m.second > mm){
                mm = m.second;
                max = make_pair(m.first, mm);
            }
            if(m.second < mini){
                mini = m.second;
                min = make_pair(m.first, mini);
            }
        }

        for (int i = 0; i < n; i++){
            if(min.first == s[i]){
                s[i] = max.first;
            }
        }
        

        cout << s << endl;



    }
    
    return 0;
}