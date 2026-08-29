class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> v;

        for(string w: strs)
        {   
            string w_ = w;
            sort(w_.begin(),w_.end());
            mp[w_].push_back(w);
        }

        // FILL returned vector
        for( pair<string, vector<string>> a:mp) v.push_back(a.second);

        return v;

    }
};

