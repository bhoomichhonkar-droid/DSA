#include<bits/stdc++.h>
using namespace std;
int max_subarray_sum(int arr[],int n){
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            max_sum=max(max_sum,sum);
        }
    }
    return max_sum;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<max_subarray_sum(arr,n)<<endl;
    return 0;
}