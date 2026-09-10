class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int low = prices[0];
        int high = prices[0];


        for(int p: prices)
        {
            if(p < low)
            {
                low = p;
                high = p;
                continue;
            }

            if(high < p)
            {
                high = p;
                max =  ((high - low ) < max) ? max : (high - low ); 
            }
        }


        return max;

    }
};
