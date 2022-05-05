class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int l = nums[nums.size()-1];
        int m = nums[nums.size()-2];
        int n = nums[nums.size()-3];
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        if(a*b*l > l*m*n){
            return a*b*l;
        }else if(a*b*c > l*m*n){
            return a*b*c;
        }else{
            return l*m*n;
        }
    }
    
};
