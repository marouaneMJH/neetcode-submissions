class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // num[i] + num[j] = target 
        // if(i<j) num[i]<num[j] and i!=j
        // j ∈ [i+1, size]
        // num[j] = target - nums[i]

        for(int i=0;i<numbers.size();i++)
        {
            // Using binary search, search from i+1 to the end for the needed value (target - numbers[i])
            auto it = lower_bound(next(numbers.begin(), i + 1), numbers.end(), (target - numbers[i]));
            
            // If we needed value is founded 
            if(it != numbers.end() && *it == (target - numbers[i]))
            {
                return {
                    i + 1,
                    // Find the index of needed value from the iterator
                    static_cast<int>(distance(numbers.begin(), it)) +1 
                };

            }

        }
    }
};
