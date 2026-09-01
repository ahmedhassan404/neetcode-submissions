class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxvalue = 0;
        int i = 0;
        int j = h.size() - 1;

        while (i < j)
        {
            int currant = min(h[i], h[j]) * (j - i);
            maxvalue = max(currant, maxvalue);

            if (h[i] < h[j])
                i++;
            else
                j--;
        }

        return maxvalue;
    }
};