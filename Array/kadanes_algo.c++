#include <iostream>
using namespace std;

int kadane(int arr[], int n) {
    int sum = 0;
    int maxi = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }

    return maxi;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;

    cout << kadane(arr, n);

    return 0;
}