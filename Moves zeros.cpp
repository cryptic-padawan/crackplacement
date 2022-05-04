class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0,i=0;
        for(int k=0;k<nums.size();k++)
        {
            
            if(nums[i]==0 &&nums[j]==0)
                j++;
            
            else
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            
        }
    }
};
