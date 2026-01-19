class Solution {
public:
    int maxProduct(int n) {
        int num = n, largest = INT_MIN, secLargest = INT_MIN;
        while(num > 0)
        {
            if(num % 10 > largest)
            {
                secLargest = largest;
                largest = num % 10;
            }
            else if(num % 10 <= largest && num % 10 > secLargest)
                secLargest = num % 10;
            num /= 10;
        }
        return largest * secLargest;
    }
};