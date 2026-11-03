class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int right=0;
        int maxFreq=0, maxLength=0;
        int freq[26]={0};
        while(right < s.length())
        {
            freq[s[right]-'A']++;
            maxFreq=max(maxFreq, freq[s[right]-'A']);
            if(((right-left+1)-maxFreq)>k)
            {
                freq[s[left]-'A']--;
                left++;
            }
            maxLength=max(maxLength, (right-left+1));
            right++;
        }
        return maxLength;
    }
};