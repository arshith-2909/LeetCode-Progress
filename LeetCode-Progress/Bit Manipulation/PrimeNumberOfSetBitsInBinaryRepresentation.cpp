class Solution {
public:
    int countOnes(int n)
    {
        int count = 0;
        while(n > 0)
        {
            if(n % 2 == 1)
                count++;
            n /= 2;
        }
        return count;
    }
    bool isPrime(int n)
    {
        if(n < 2)
            return false;
        int cnt = 0;
        for(int i = 1; i * i <= n; i++)
        {
            if(n % i == 0 && n/i != i)
                cnt += 2;
            else if(n % i == 0 && n/i == i)
                cnt++;
        }
        return cnt == 2;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for(int i = left; i <= right; i++)
        {
            int a = countOnes(i);
            if(isPrime(a))
                cnt++;
        }
        return cnt;
    }
};