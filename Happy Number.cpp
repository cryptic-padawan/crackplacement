class Solution {
public:
    bool isHappy(int n) {
        long long sum=0;
        int m;
        int temp=n;
        int flag=1;
        while(n!=0)
        {
            int rem=n%10;
            sum+=(rem*rem);
            n=n/10;
            
            if(n==0 && sum==1)
                return true;
            
            else if(n==0)
            {
                n=sum;
                sum=0;
                if(n==4)   
                    return false;
            } 
        }
        return false;
    }
};
