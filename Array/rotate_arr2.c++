#include <bits/stdc++.h>
using namespace std;
void rotate_arr(int arr[],int n ,int d) {
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}
//here time complexity is slightly increased but space complexity is reduced to O(1) from O(d)
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d=2;
    rotate_arr(arr, n,d);   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
