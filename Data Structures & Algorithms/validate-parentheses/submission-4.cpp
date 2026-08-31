class Solution {
public:
    bool isValid(string s) {
        stack<char> a;

        if (s.size() % 2 != 0)
        {
            return false;
        }

        for (char c : s)
        {
            if (c == '{' || c == '[' || c == '(')
            {
                a.push(c);
            }
            else
            {
                if (a.empty())
                {
                    return false;
                }

                if (c == '}' && a.top() == '{')
                {
                    a.pop();
                    continue;
                }
                else if (c == ']' && a.top() == '[')
                {
                    a.pop();
                    continue;
                }
                else if (c == ')' && a.top() == '(')
                {
                    a.pop();
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }

        return a.empty();
    }
};