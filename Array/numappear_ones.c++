#include <bits/stdc++.h>
using namespace std;

int numAppearances(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        int count = 0;

        for (int j = 0; j < n; j++) {

            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            return arr[i];
        }
    }

    return -1;
}

int main() {

    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << numAppearances(arr, n) << endl;

    return 0;
}