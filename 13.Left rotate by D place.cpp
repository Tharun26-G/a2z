vector<int> rotateArray(vector<int>arr, int k,int n) {
    // Write your code here.
    k = k % n;
    
    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
}
