class Solution {
public:

    string encode(vector<string>& strs) {
        string encodestr = "";

        for (string str : strs) {
            encodestr += to_string(str.size());
            encodestr += "#";
            encodestr += str;
        }

        return encodestr;
    }

    vector<string> decode(string s) {
        vector<string> decodevec;
        string temp = "";

        for (int i = 0; i < s.size(); ) {

            string num = "";

            while (s[i] != '#') {
                num += s[i];
                i++;
            }

            int len = stoi(num);
            i++;

            temp = "";

            for (int j = 0; j < len; j++) {
                temp += s[i];
                i++;
            }

            decodevec.push_back(temp);
        }

        return decodevec;
    }
};