#include <bits/stdc++.h>
using namespace std;

int union_arr(int arr1[], int n1, int arr2[], int n2, int temp[]) {

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {

        if (arr1[i] < arr2[j]) {
            if (k == 0 || temp[k - 1] != arr1[i]) {
                temp[k++] = arr1[i];
            }
            i++;
        }

        else if (arr2[j] < arr1[i]) {
            if (k == 0 || temp[k - 1] != arr2[j]) {
                temp[k++] = arr2[j];
            }
            j++;
        }

        else {
            if (k == 0 || temp[k - 1] != arr1[i]) {
                temp[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }

    // Remaining elements of arr1
    while (i < n1) {
        if (k == 0 || temp[k - 1] != arr1[i]) {
            temp[k++] = arr1[i];
        }
        i++;
    }

    // Remaining elements of arr2
    while (j < n2) {
        if (k == 0 || temp[k - 1] != arr2[j]) {
            temp[k++] = arr2[j];
        }
        j++;
    }

    return k;
}

int main() {

    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 3, 5, 6};

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