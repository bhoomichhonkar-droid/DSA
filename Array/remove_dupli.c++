#include<bits/stdc++.h>
using namespace std;

int remove_duplicates(int arr[], int n) {
    int temp[n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        bool is_duplicate = false;
        for (int j = 0; j < k; j++) {
            if (temp[j] == arr[i]) {
                is_duplicate = true;
                break;
            }
        }
        if (!is_duplicate) {
            temp[k++] = arr[i];
        }
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    return k;
}
int main () {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    n = remove_duplicates(arr, n);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}