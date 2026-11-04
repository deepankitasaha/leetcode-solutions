class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        int freq1[26]={0};
        int freq2[26]={0};

        int left=0, right=0;
        while(right<s1.length())
        {
            freq1[s1[right]-'a']++;
            right++;
        }
        for(int i=0;i<s1.length();i++)
        {
            freq2[s2[i]-'a']++;
        }
        bool match=true;
        for(int j=0;j<26;j++)
        {
            if(freq1[j] != freq2[j])
            {
                match=false;
                break;
            }
        }
        if(match)
            return true;
        for(int i=0;i<s2.length()-s1.length();i++)
        {
            freq2[s2[i]-'a']--;
            freq2[s2[i + s1.length()]-'a']++;
            bool match=true;
            for(int j=0;j<26;j++)
            {
                if(freq1[j] != freq2[j])
                {
                    match=false;
                    break;
                }
            }
            if(match)
                return true;
        }
        return false;
    }
};