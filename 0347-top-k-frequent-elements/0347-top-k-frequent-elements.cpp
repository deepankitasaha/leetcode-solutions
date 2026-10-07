class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        vector<pair<int,int>> freq;
        for(auto x : map)
        {
           // x.first=nums[i];
           // x.second=map[nums[i]];
            freq.push_back({x.first, x.second});
        }
        sort(freq.begin(), freq.end(), [](pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
});

        vector<int> ans;

for(int i = 0; i < k; i++)
{
    ans.push_back(freq[i].first);
}

return ans;
        
    }
};