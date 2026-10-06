#include <bits/stdc++.h>
using namespace std;

void nextPermutation(int arr[], int n) {
    vector<vector<int>> ans;

    // Generate all permutations
    sort(arr, arr + n);

    do {
        vector<int> temp(arr, arr + n);
        ans.push_back(temp);
    } while (next_permutation(arr, arr + n));

    // Current array
    vector<int> current(arr, arr + n);

    // Find current and take next
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == current) {
            if (i + 1 < ans.size()) {
                for (int j = 0; j < n; j++)
                    arr[j] = ans[i + 1][j];
            }
            else {
                for (int j = 0; j < n; j++)
                    arr[j] = ans[0][j];
            }
            break;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = 3;

    nextPermutation(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}