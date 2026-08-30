class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        int current = 0;

        set<int> numbers;

        for (int num : nums) {
            numbers.insert(num);
        }

        for (int num : numbers) {
            if (numbers.count(num + 1)) {
                current++;
            } else {
                current = 0;
            }

            longest = max(longest, current);
        }

        if (numbers.empty()) {
            return 0;
        }

        return longest + 1;
    }
};