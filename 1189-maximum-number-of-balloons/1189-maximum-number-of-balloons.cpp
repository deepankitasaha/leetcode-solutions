class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        string b="balloon";
        int count=INT_MAX;
        for(int i=0;i<text.length();i++)
        {
            mp[text[i]]++;
        }
        for(int i=0;i<b.length();i++)
        {
           int b=mp['b'];
           int a=mp['a'];
           int l=mp['l']/2;
           int o=mp['o']/2;
           int n=mp['n'];
           return min({b,a,l,o,n});
        }
        return -1;
        
    }
};