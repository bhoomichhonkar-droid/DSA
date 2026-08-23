#include <bits/stdc++.h>
using namespace std;

int second_largest(int arr[],int n){
    int largest = arr[0];
    
    int second_largest = -1;
    for (int i=0;i<n;i++){
        if (arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if (arr[i]>second_largest){
            second_largest=arr[i];
        }
    }
    return second_largest;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<second_largest(arr,n)<<endl;
    return 0;
}