class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int right=nums.size() - 1;
        int left=0;
        while(left<=right )
        {
            if(nums[left]==val)
            {

                while(left<=right && nums[right]==val)
                {
                    right--;
                }
                if(left<=right)
                {
                    swap(nums[left],nums[right]);
                right--;
                left++;
                }
                else
                {
                    break;
                }
                
            }
            else
            {
                left++;
            }
            
        }
        return left;
    }
};