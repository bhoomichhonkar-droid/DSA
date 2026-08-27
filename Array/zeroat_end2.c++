#include<bits/stdc++.h>
using namespace std;
void zeroend(int arr[],int n){
    int j = -1;
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
        
    }
}
int main(){
    int arr[]={1,0,2,0,3,0,4,86,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    zeroend(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}