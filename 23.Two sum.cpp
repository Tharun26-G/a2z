// returning index 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};

//return YES or NO

string read(int n, vector<int> book, int target)
{
    
    int left=0;
    int right = n-1;

    sort(book.begin(),book.end());

    while(left<right){
        int sum = book[left] + book[right];

        if(sum == target){
            return "YES";
        }
        else if(sum < target){
            left++;
        }
        else right--;

    }
    return "NO"; 
}
