#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n, int k) {
    unordered_map<int, int> mp;
    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // Sum from 0 to i
        if (sum == k) {
            maxLen = i + 1;
        }

        // Check if previous prefix sum exists
        if (mp.find(sum - k) != mp.end()) {
            maxLen = max(maxLen, i - mp[sum - k]);
        }

        // Store only first occurrence
        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    int arr[] = {10, 5, 2, 7, 1, -10};
    int n = 6;
    int k = 15;

    cout << longestSubarray(arr, n, k);

    return 0;
}