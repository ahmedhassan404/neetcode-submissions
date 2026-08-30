class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequent;
        vector<int> result;

        for (int num : nums) {
            frequent[num]++;
        }

        for (int i = 0; i < k; i++) {
            int maxFreq = 0;
            int maxNum = 0;

            for (const auto& [num, count] : frequent) {
                if (count > maxFreq) {
                    maxFreq = count;
                    maxNum = num;
                }
            }

            result.push_back(maxNum);
            frequent.erase(maxNum);
        }

        return result;
    }
};