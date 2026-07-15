#include <bits/stdc++.h>
using namespace std;
int long_subarr(vector<int> &arr, long long k) {
    map<long long, int> prefix_sum_map;
    long long prefix_sum = 0;
    int maxlength = 0;
    for (int i = 0; i < (int)arr.size(); i++) {
        prefix_sum += arr[i];
        if (prefix_sum == k) {
            maxlength = i + 1;
        }
        int remaining_sum = prefix_sum - k;
        if (prefix_sum_map.find(remaining_sum) != prefix_sum_map.end()) {
            maxlength = max(maxlength, i - prefix_sum_map[remaining_sum]);
        }
        if (prefix_sum_map.find(prefix_sum) == prefix_sum_map.end()) {
      
            prefix_sum_map[prefix_sum] = i;
        }
    }
    return maxlength;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    long long k = 6;
    cout << long_subarr(arr, k) << endl;
}