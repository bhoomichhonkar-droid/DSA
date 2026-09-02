#include <bits/stdc++.h>
using namespace std;

int numappear_ones(int arr[], int n) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << numappear_ones(arr, n) << endl;

    return 0;
}