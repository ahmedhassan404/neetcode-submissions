class Solution { 
public: 
    int characterReplacement(string s, int k) { 
        
        unordered_map<char, int> freq;
        
        int left = 0;
        int best = 0;
        int maxFreq = 0;
        
        for (int right = 0; right < s.size(); right++) {
            
            freq[s[right]]++;
            
            maxFreq = 0;
            
            for (auto item : freq) {
                maxFreq = max(maxFreq, item.second);
            }
            
            while ((right - left + 1) - maxFreq > k) {
                
                freq[s[left]]--;
                left++;
                
                maxFreq = 0;
                
                for (auto item : freq) {
                    maxFreq = max(maxFreq, item.second);
                }
            }
            
            best = max(best, right - left + 1);
        }
        
        return best;
    } 
};