#include <bits/stdc++.h>
using namespace std;

int two_sum(int arr[], int n, int target) {
    

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                return 0; // Pair found
            }
        }
    }
    return 0; // No pair found
}
int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    two_sum(arr, n, target);

    return 0;
}