class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       /* vector<int> neg;
        vector<int> pos;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }
        if(neg.size()==0){
            for(int i=0;i<pos.size();i++)
            {
                pos[i]=pow(pos[i],2);
            }
            return pos;
    }
       else if(pos.size()==0)
        {
            for(int i=0;i<neg.size();i++)
            {
                neg[i]=pow(neg[i],2);
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        else {
        vector<int> ans;
        int n=pos.size(), m=neg.size();
         for(int i=0;i<pos.size();i++)
            {
                pos[i]=pow(pos[i],2);
            }
         for(int i=0;i<neg.size();i++)
            {
                neg[i]=pow(neg[i],2);
            }
            reverse(neg.begin(),neg.end());
        int i,j, index=0;
        while(i<n && j<m)
        {
            if(neg[i]<pos[i])
            {
                nums[index]=neg[i];
                index++;
                i++;
            }
            else
            {
                nums[index]=pos[j];
                index++;
                j++;
            }
        }
        while(i<n)
        {
            ans[index]=neg[i];
            i++;
            index++;
        }
        while(j<m)
        {
            ans[index]=pos[j];
            j++;
            index++;
        }
    return ans;
        }
        */
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};