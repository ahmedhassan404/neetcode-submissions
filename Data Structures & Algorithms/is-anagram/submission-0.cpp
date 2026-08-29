class Solution { 
public: 
    bool isAnagram(string s, string t) { 
        vector<int> s_vector(26, 0);   
        vector<int> t_vector(26, 0); 
 
        for (char c : s) 
        { 
            s_vector[c - 97]++; 
        } 
 
        for (char c : t) 
        { 
            t_vector[c - 97]++; 
        } 
 
        if (t_vector == s_vector) 
        { 
            return true;  
        } 
 
        return false;  
    } 
};