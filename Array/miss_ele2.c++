#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {

    int hash[n + 1] = {0};

    // Mark elements that are present
    for (int i = 0; i < n; i++) {
        hash[arr[i]] = 1;
    }

    // Find the element which is not present
    for (int i = 0; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    return -1;
}

int main() {

    int arr[] = {0, 1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing number: " << missingNumber(arr, n);

    return 0;
}