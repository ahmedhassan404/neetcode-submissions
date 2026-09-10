class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int j = nums.size() - 1;

        for (int i = 0; i <= j;) {
            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                j--;
                count++;
            }
            else {
                i++;
            }
        }

        return nums.size() - count;
    }
};