class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int revhalf = 0, s = x, f = x;
        while(f){ 
            revhalf = revhalf * 10 + s % 10;
            s /= 10;
            f /= 100;
        }
        return s == revhalf || s == revhalf / 10;
    }
}
