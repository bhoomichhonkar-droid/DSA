// time complexity:N(logN)
//space complexity:O(1)
#include <bits/stdc++.h>
using namespace std;

int largest_ele(int arr[], int n) {
    sort(arr, arr + n);
    return arr[n - 1];

}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << largest_ele(arr, n) << endl;
    return 0;
}