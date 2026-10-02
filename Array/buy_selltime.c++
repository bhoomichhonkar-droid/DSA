#include <bits/stdc++.h>
using namespace std;
int maxProfit(int arr[], int n) {
    int minPrice = arr[0];
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        int cost = arr[i] - minPrice;
        maxProfit = max(maxProfit, cost);
        minPrice = min(minPrice, arr[i]);
        
    }

    return maxProfit;
}
int main() {
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxProfit(arr, n);

    return 0;
}
