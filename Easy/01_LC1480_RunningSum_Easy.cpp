class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr(nums.size());
        int temp = nums[0];

        for(int i=0; i<nums.size(); i++)
        {
            if(i==0)
            {
                arr[i]=temp;
            }
            else
            {
                arr[i]=nums[i]+temp;
                temp = arr[i];
            }
        }

        return arr;
    }
};