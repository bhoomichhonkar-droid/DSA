#include <bits/stdc++.h>
using namespace std;
int long_subarr(vector<int> &arr, int k) {
    int n = arr.size();
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        int curr_sum = 0;
        for (int j = i; j < n; j++) {
            curr_sum += arr[j];

            if (curr_sum == k) {
                max_len = max(max_len, j - i + 1);
            }
        }
    }

    return max_len;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 7;
    cout << long_subarr(arr, k) << endl;
}