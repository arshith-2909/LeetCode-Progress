class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int ld,num=x;
        long rev = 0;
        while(num>0)
        {
            ld=num%10;
            rev = rev * 10 + ld;
            num/=10;
        }
        if(rev == x)
            return true;
        return false;
    }
};