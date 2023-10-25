#include<bits/stdc++.h>
#include<vector>
using namespace std;
void recursiveIS(vector<int>& arr, int n){
    if(n<=1){
    return;
    }

    recursiveIS(arr,n-1);

    int lastelement = arr[n-1];
    int j = n-2;

    while(j>=0 && arr[j]>lastelement){

       
        arr[j+1]=arr[j];
        j--;
    }

    arr[j+1]=lastelement;

}
int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    int n = arr.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    recursiveIS(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
