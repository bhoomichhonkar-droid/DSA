#include<bits/stdc++.h>
using namespace std;
int missing_element(int arr[],int n){
    for (int i = 0 ; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            return i;
        }
    }
}
int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<missing_element(arr,n)<<endl;
    return 0;
}
