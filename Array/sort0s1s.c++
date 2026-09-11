#include<bits/stdc++.h>
using namespace std;

int sort_0s_1s(int arr[], int n) {
    int count_zeros = 0;
    int count_ones = 0;
    int count_twos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count_zeros++;
        }
        else if (arr[i] == 1) {
            count_ones++;
        }
        else if (arr[i] == 2) {
            count_twos++;
        }
    }
    int index = 0;
    for (int i = 0; i < count_zeros; i++) {
        arr[index++] = 0;
    }
    for (int i = 0; i < count_ones; i++) {
        arr[index++] = 1;
    }
    for (int i = 0; i < count_twos; i++) {
        arr[index++] = 2;
    }
    return 0;
}

int main() {
    int arr[] = {0, 1, 0, 1, 1, 0,2,2,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_0s_1s(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
} 