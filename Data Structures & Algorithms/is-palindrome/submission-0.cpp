class Solution {
public:
    bool isPalindrome(string s) {

        int j = s.size() - 1;

        for (int i = 0; i < j; i++) {

            while (i < j && !isalnum(s[i])) {
                i++;
            }

            while (i < j && !isalnum(s[j])) {
                j--;
            }

            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            j--;
        }

        return true;
    }
};