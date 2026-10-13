class Solution {
public:
    int maxArea(vector<int>& height) {
       // sort(height.begin(), height.end())
        int left=0, right=height.size()-1;
        int max_area=0;
       while(left<right)
       {
        int min_height=min(height[left],height[right]);
        int length=right-left;
        int area= length * min_height;
        max_area=max(area, max_area);
        if(height[left]<height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
       }
       return max_area;
    }
};