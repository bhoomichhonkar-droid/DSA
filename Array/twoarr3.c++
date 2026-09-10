#include<bits/stdc++.h>
using namespace std;
int two_arr(int arr[],int n,int target){
    sort(arr,arr+n);
    int left=0; 
    int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            cout<<"Pair found: ("<<arr[left]<<", "<<arr[right]<<")"<<endl;
            return 0;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return 0;
}
int main(){
int arr[]={2,7,11,15};
int n=sizeof(arr)/sizeof(arr[0]);
int target=9;
two_arr(arr,n,target);
return 0;
}