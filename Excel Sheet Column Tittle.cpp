class Solution {
public:
    string convertToTitle(int cn) {
        string ct;
        char ch;
        while(cn>0){
            cn--;
            ch= ('A' + cn%26);
            ct=ch+ct;
            cn/=26;
        }
        return ct;
    }
};
