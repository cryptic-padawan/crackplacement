class Solution {
public:
    bool isPalindrome(int x) {
        long int k=0,l=0;
        k=x;
        while(x)
        {
            l=(l*10)+(x%10);
            x/=10;
        }
        if(k==l && k>=0)
            return true;
        return false;
    }
};
