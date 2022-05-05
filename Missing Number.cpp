class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k=(nums.size()*(nums.size()+1)/2);
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            k-=nums[i]; 
        }
        return k;
    }
};
