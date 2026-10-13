class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int cm=1, officer=1;
       for(cm=1;cm<nums.size();cm++)
       {
        if(nums[cm] != nums[officer-1])
        {
            nums[officer]=nums[cm];
            officer++;
        }
       }
       return officer;
    }

};