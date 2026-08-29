class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // DONE: 5min
        std::unordered_map<int, int> m;

        // we have: num[i] + num[j] = target
        // then:    target - num[i] = num[j]

        // Value -> index
       for(int i=0;i< nums.size(); i++) 
        {
            auto it= m.find(target - nums[i]);

            if( it!= m.end())
                return {it->second, i};
            
            m.insert({nums[i],i});
        
        }

        return {};
    }

};
