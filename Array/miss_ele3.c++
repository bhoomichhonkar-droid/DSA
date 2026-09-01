#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {
    int ans = n;

    for (int i = 0; i < n; i++) {
        ans = ans ^ i ^ arr[i];
    }

    return ans;
}

int main() {
    int arr[] = {0, 1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << missingNumber(arr, n);

    return 0;
}