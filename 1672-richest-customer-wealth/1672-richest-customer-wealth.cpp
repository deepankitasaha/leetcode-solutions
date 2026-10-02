class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        vector<int> wealth(accounts.size(), 0);
        int maximum=-1;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
                wealth[i]+=accounts[i][j];
            }
            maximum=max(maximum,wealth[i]);
        }
        return maximum;
    }
};