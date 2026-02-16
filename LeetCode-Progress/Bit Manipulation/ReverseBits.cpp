class Solution {
public:
    int bin(int n)
    {
        vector<int>bin;
        while(n > 0)
        {
            bin.push_back(n%2);
            n /= 2;
        }
        while(bin.size()<32)
            bin.push_back(0);
        reverse(bin.begin(), bin.end());
        int sum = 0;
        for(int i = 0; i < bin.size(); i++)
        {
            sum += (bin[i]*pow(2,i));
        }
        return sum;
    }
    int reverseBits(int n) {
        return bin(n);
    }
};