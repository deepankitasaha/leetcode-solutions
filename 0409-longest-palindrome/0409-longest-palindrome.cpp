class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map;
        for(int i=0;i<s.length();i++)
        {
            map[s[i]]++;
        }
        int length=0;
        int hasOdd=false;
        for(auto x : map)
        {
            if((x.second % 2 == 0))
            {
                length+=x.second;
            }
            else
            {
                length+=x.second - 1;
                hasOdd=true;
            }
        }
        if(hasOdd==true)
            length++;
        return length;
    }
};