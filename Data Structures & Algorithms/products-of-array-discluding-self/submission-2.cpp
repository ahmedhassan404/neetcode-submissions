class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int product = 1;
        int zeroCount = 0;

        for (int num : nums) {
            if (num == 0) {
                zeroCount++;
                continue;
            }

            product *= num;
        }

        if (zeroCount > 1) {
                  result = vector<int>(nums.size(), 0);
                  return result;
        }

        if (zeroCount) {
            for (int num : nums) {
                if (num == 0) {
                    result.push_back(product);
                } else {
                    result.push_back(0);
                }
            }
        } else {
            for (int num : nums) {
                result.push_back(product / num);
            }
        }

        return result;
    }
};

