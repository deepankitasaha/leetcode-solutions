class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int max_diff=INT_MAX;
        int diff, result_sum;
        int i=0, right=nums.size()-1, left=0;
        for(i=0;i<nums.size()-2;i++)
        {
            left=i+1;
            right=nums.size()-1;
            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                diff=abs(sum-target);
                if(diff<max_diff)
                {
                    max_diff=diff;
                    result_sum=sum;
                }
                if(sum==target)
                {
                    return sum;
                }
                else if (sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
            return result_sum;
        }
    
};