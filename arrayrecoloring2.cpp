#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort in descending order
    sort(a.rbegin(), a.rend());

    // Sum of the k largest elements
    long long sum_k_largest = accumulate(a.begin(), a.begin() + k, 0LL);

    // The last painted element is the largest among the remaining n-k elements
    long long last_painted = *max_element(a.begin() + k, a.end());

    // Maximum possible cost
    cout << sum_k_largest + last_painted << "\n";
}

int main() { // Change back to int main()
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);  
    #endif

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0; // Ensure main() returns int
}
