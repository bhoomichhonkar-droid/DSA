#include <bits/stdc++.h>
using namespace std;
vector <int> nextPermutation(vector<int>& nums) {
    int index = -1;
    int n = nums.size();
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        reverse(nums.begin(), nums.end());
        return nums;
    }
    for (int i = n - 1; i > index; i--) {
        if (nums[i] > nums[index]) {
            swap(nums[i], nums[index]);
            break;
        }
    }
    reverse(nums.begin() + index + 1, nums.end());
    return nums;
}
int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> result = nextPermutation(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}