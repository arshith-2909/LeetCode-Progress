class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int largest = arr[0], secondLargest = INT_MIN;
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] > largest)
            {
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > secondLargest)
                secondLargest = arr[i];
        }
        int count = 0;
        for(auto it:arr)
        {
            if(it == largest)
                count++;
        }
        if(count > 1)
            return (largest-1)*(largest-1);
        int ans = (largest - 1) * (secondLargest - 1);
        return ans;
    }
};