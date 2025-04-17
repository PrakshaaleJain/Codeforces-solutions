#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define pb push_back
#define forn(i,n) for(int i = 0; i < n; i++)

pair<lli, lli> findEntryWithLargestValue(map<lli, lli> sampleMap){ 
    // Reference variable to help find 
    // the entry with the highest value 
    pair<lli, lli> entryWithMaxValue = make_pair(0, 0); 
 
    // Iterate in the map to find the required entry 
    map<lli, lli>::iterator currentEntry; 
    for (currentEntry = sampleMap.begin(); 
        currentEntry != sampleMap.end(); 
        ++currentEntry) { 
 
        // If this entry's value is more 
        // than the max value 
        // Set this entry as the max 
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
vector<lli> findPrefixSum(vector<lli> &arr) {
    lli n = arr.size();
    
    // to store the prefix sum
    vector<lli> prefixSum(n);

    // initialize the first element
    prefixSum[0] = arr[0];

    // Adding present element with previous element
    for (lli i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    
    return prefixSum;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);  
    #endif
    
    int  t;
    cin >> t;

    while(t--){
        lli n,m; 
        cin >> n >> m;

        vector<vector<lli>> arr;
        forn(i,n){
            vector<lli> temp(m);
            forn(j,m)
                cin >> temp[j];
            arr.pb(temp);
        }

        // vector<int> sum;
        map<lli,lli> index_to_sum;
        
        for(int i = 0; i <n; i++){
            lli s =0;
            for(int j = 0; j <m; j++){
                s += arr[i][j];
            }

            index_to_sum[i] = s;
        }

        vector<lli> res;
        forn(i,n){
            pair<lli,lli> mp_pair = findEntryWithLargestValue(index_to_sum);
            // res.pb(arr[mp_pair.first]);
            res.insert(res.end(), arr[mp_pair.first].begin(), arr[mp_pair.first].end());
            
            // remove the highest sum from map;
            index_to_sum.erase(mp_pair.first);
        }

        vector<lli> prefsum = findPrefixSum(res);
        lli ans = 0;
        forn(i,prefsum.size())
            ans += prefsum[i];
        
        cout << ans << endl;

        



    }
    
    return 0;
}