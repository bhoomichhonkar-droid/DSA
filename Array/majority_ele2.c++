#include<bits/stdc++.h>
using namespace std;
int majority_ele(int arr[],int n ){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<majority_ele(arr,n)<<endl;
    return 0;
}
