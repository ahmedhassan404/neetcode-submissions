class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int > frq ;
        int bestlong = 0 ;
        int left = 0 ;
        for(int right = 0 ; right < int(s.size()) ; right ++ )
        {
            frq[s[right]] ++ ;
            while(frq[s[right]] > 1)
            {
                 frq[s[left]] -- ;
                 left ++;
            }

            bestlong = max(bestlong , right - left +1);
        }
        return bestlong ;
        
    }
};
