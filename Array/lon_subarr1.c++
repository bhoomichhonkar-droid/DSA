#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n, int k) {
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
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