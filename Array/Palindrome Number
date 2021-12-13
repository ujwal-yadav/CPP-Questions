class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        int lastDigit;
        long reverse=0;
        while(y>0){
            lastDigit=y%10;
            reverse=reverse*10+lastDigit;
            y=y/10;
        }
        if(reverse==x)
            return true;
        
        else return false;
    }
};
