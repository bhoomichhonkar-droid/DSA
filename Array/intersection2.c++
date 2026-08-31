#include <bits/stdc++.h>
using namespace std;

int intersection(int arr1[], int n1, int arr2[], int n2, int temp[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] == arr2[j]) {
            temp[k++] = arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return k;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int temp[min(n1, n2)];

    int k = intersection(arr1, n1, arr2, n2, temp);

    cout << "Intersection of arrays: ";
    for (int i = 0; i < k; i++) {
        cout << temp[i] << " ";
    }

    return 0;
}