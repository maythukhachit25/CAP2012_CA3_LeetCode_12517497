class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
        vector<int> numsofarr(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[i]>nums[j])
                {
                    count++;
                }
            }
            numsofarr[i]=count;
            count=0;
            
        }
    return numsofarr;
    }

};