#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << " " << j << endl;
                cout << "Values: " << arr[i] << " " << arr[j] << endl;
                return 0;
            }
        }
    }

    cout << "No pair found";

    return 0;
}