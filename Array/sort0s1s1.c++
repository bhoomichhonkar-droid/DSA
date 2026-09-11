//dutch national flag algorithm
//rules  [0 low-1]=0, [low mid-1]=1, [high n-1]=2
#include<bits/stdc++.h>
using namespace std;
int sort_0s_1s(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
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