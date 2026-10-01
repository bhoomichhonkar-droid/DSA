#include<bits/stdc++.h>
using namespace std;
int majority_ele(vector<int> arr,int n ){
    int cnt=0;
    int ele=-1;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=arr[i];
        }
        else if(ele==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cnt++;
        }
    }
    if(cnt>n/2){
        return ele;
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,2,2};
    int n = arr.size();
    cout<<majority_ele(arr,n)<<endl;
    return 0;
}