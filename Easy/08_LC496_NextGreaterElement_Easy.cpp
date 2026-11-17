class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newArr;

        for(int i=0; i<nums1.size(); i++)
        {
            int greater = -1;
            bool found = false;

            for(int j=0; j<nums2.size(); j++)
            {
                if(nums1[i]==nums2[j]) found = true;
                else if(found && nums2[j]>nums1[i])
                {
                    greater = nums2[j];
                    break;
                }
            }
            newArr.push_back(greater);
        }
        return newArr;
    }
};