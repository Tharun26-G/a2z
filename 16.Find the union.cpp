
#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n=a.size();
    int m=b.size();

   unordered_set<int> unionset;

    for(int i=0;i<n;i++){
        unionset.insert(a[i]);

    }
    for(int j=0;j<m;j++){
        unionset.insert(b[j]);
    }
    vector<int> result;
    for (int num : unionset) {
        result.push_back(num);
    }

    // Sort the vector before returning
    sort(result.begin(), result.end());

    return result;

}
