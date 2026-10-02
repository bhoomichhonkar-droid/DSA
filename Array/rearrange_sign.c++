#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n) {
    int positive[n], negative[n];
    int p = 0, ne = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive[p++] = arr[i];
        else
            negative[ne++] = arr[i];
    }

    for (int i = 0; i < n / 2; i++) {
        arr[2 * i] = positive[i];
        arr[2 * i + 1] = negative[i];
    }
}

int main() {
    int arr[] = {3, 1, -2, -5, 2, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}