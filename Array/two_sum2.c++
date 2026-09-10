#include<bits/stdc++.h>
using namespace std;
int two_arr(int arr[],int n,int target){
    unordered_map<int,int> mp;
    for (int i=0;i<n;i++){
        int complement = target - arr[i];
        if (mp.find(complement)!=mp.end()){
            cout<<"Pair found: ("<<arr[i]<<", "<<complement<<")"<<endl;
            return 0;
        }
        mp[arr[i]]=i;
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