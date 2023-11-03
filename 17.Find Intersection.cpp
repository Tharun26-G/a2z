#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
 vector<int> ans;
 int i=0;
 int j=0;
 while(i<n && j<m){
		 if(arr1[i]<arr2[j]){
			 i++;
		 }
		 else if(arr2[j]<arr1[i]){
			 j++;
		 }
		 else{
			 ans.push_back(arr1[i]);
			 i++;
			 j++;
		 }
	 }
 
 return ans;

}


/*#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
 vector<int> intersectionset;
  vector<int> vis(m, 0);;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]&&vis[j]==0){
                intersectionset.push_back(arr1[i]);
				vis[j]=1;
                break;
            }
			if(arr2[j]>arr1[i]) break;
        }
    }
    return intersectionset;

}*/
