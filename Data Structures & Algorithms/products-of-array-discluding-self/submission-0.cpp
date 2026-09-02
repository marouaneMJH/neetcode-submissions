class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.size());
        int pre =1,post=1;

        for(int i=0;i<nums.size();i++)
        {
            // pre(i=k) = 0 => pre(i=k+1)
            // arr[i] = 0 => arr[i+k] = 0
            // so it's clear every value after 0 prefix will be 0 
            if(pre == 0)
            {
                for(int j=i;j<nums.size();j++) arr[j] = 0;
                break;   
            }

            // calculate the new postfix
            if(nums[i] == 0 || i == 0)
            {
                post = 1;
                for(int j=i+1;j<nums.size();j++) post*=nums[j];   

            } else post /= nums[i];

            arr[i] = pre * post;

            // Increment the pefix
            pre *= nums[i];
        }

        return arr;

    }
};
