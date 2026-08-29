class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for (string s : strs)
        {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            res[sorted_s].push_back(s);
        }

        vector<vector<string>> result;
        for (auto const& [key, val] : res) {
            result.push_back(val);
        }

        return result;
    }
};