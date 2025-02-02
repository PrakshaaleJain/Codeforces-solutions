#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k;  // Array length n and number of subarrays k
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];  // Read array elements
        }

        // To form the array `b`, we need to take the elements from even-indexed subarrays.
        vector<int> b;
        
        // Add a 0 at the end as mentioned in the problem.
        b.push_back(0);
        
        // Process the subarrays at even indices (2nd, 4th, 6th, ...)
        int index = 1;  // Start from the 1-based index 2 (i.e., second subarray)
        for (int i = 0; i < k / 2; i++) {
            b.push_back(a[index]);
            index += 2;  // Skip to the next even-indexed subarray
        }
        
        // Calculate the minimum cost
        int cost = 0;
        for (int i = 1; i < b.size(); i++) {
            if (b[i] != i) {
                cost = i;
                break;
            }
        }

        cout << cost << endl;  // Output the result
    }

    return 0;
}
