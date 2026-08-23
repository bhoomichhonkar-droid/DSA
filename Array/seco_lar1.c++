#include <bits/stdc++.h>
using namespace std;
int second_largest(int arr[],int n){
    sort  (arr,arr+n);
    for (int i=n-2;i>=0;i--){
        if (arr[i]!=arr[n-1]){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<second_largest(arr,n)<<endl;
    return 0;
}