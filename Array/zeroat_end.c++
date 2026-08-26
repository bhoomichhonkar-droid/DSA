#include<bits/stdc++.h>
using namespace std;
void zeroesto_end(int arr[],int n){
    int temp[n];
    int count=0;
    for (int i=0;i<n;i++){
        if (arr[i]!=0){
            temp[count]=arr[i];
            count++;
        }
    }
    while (count<n){
        temp[count]=0;
        count++;
    }
    for (int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int arr[]={1,0,2,0,3,0,4,86,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    zeroesto_end(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}