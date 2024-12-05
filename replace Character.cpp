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

        // map<char, int> mp;

        // for(int i = 0; i < l; i++){
        //     mp[s[i]]++;
        // }

        // pair<char, int> pp = findEntryWithLargestValue(mp);
        // char c = pp.first;
        // int k = pp.second;

        // int r = l - 1;
        // while( r >= 0){
        //     if(s[r] != c){
        //         s[r] = c;
        //         break;
        //     }
        //     else
        //         r--;
        // }

        // cout << s << endl;


        // char c;
        // int maxi = 0;
        // for (int i = 0; i < n; i++){
        //     int cnt = 1;
        //     for (int j = i; j < n; j++){
        //         if(s[i] == s[j])
        //             cnt++;
                
        //         if(cnt > maxi){
        //             maxi = max(maxi, cnt);
        //             c = s[i];
        //         }
        //     }
        // }

        // int r = l - 1;
        // while(r >= 0){
        //     if(s[r] != c){
        //         s[r] = c;
        //         break;
        //     }
        //     else
        //         r--;
        // }
        
        // cout << s << endl;

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


        unordered_map<char, int> mp;
        pair<char,int> cf;
        int freq = 0;
        for (int i = 0; i < n; i++){
            mp[s[i]]++;
            if(mp[s[i]] > freq){
                freq = mp[s[i]];
                cf = make_pair(s[i], freq);
            }
        }
        
        char rep = cf.first;
        for (int i = 0; i < n; i++){
            if(s[i] != rep){
                s[i] = rep;
                break;
            }
        }
                
        cout << s << endl;
    }
    
    return 0;
}