class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
        int right=nums.size()-1, left=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i] != 0)
        {
            swap(nums[i], nums[left]);
            left++;
        }
       }
    }
};