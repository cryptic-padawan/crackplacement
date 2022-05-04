class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0,min=nums[0],max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<min)
            {
                min=nums[i];
                max=nums[i];
            }
            if(nums[i]>max)
            {
                max=nums[i];
            }
            if(ans<max-min)
                ans=max-min;
        }
        return ans;
    }
};
