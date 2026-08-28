class Solution {
public:


    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> m;

        for(char c: s)
        {
            if(!m.contains(c))
                m.insert({c,1});
            else
                m[c]++;
        }
        
        for(char c: t)
        {
            if(!m.contains(c))
                return false;

            m[c]--;

            if(m[c] <= 0)
                m.erase(c);

        }

        return m.empty();
        
    }
};