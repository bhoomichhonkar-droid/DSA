#include <bits/stdc++.h>
using namespace std;

int union_arr(int arr1[], int n1, int arr2[], int n2, int temp[]) {

    int k = 0;

    // Copy arr1 into temp
    for (int i = 0; i < n1; i++) {
        temp[k++] = arr1[i];
    }

    // Copy arr2 into temp
    for (int i = 0; i < n2; i++) {
        temp[k++] = arr2[i];
    }

    // Sort the combined array
    sort(temp, temp + k);

    // Remove duplicates
    k = unique(temp, temp + k) - temp;

    return k;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int temp[n1 + n2];

    int k = union_arr(arr1, n1, arr2, n2, temp);

    cout << "Union: ";

    for (int i = 0; i < k; i++) {
        cout << temp[i] << " ";
    }

    return 0;
}
