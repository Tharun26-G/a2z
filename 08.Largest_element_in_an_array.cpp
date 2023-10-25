#include <bits/stdc++.h>
using namespace std;

int largestelement(vector<int> &arr,int n){
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    vector<int> arr={1,2,4,6,77,2};
    int n= arr.size();

    int res=largestelement(arr,n);
    cout<<res<<" ";
}
