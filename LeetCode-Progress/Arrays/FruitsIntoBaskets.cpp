class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<int> copyy = baskets;
        for(int i = 0; i < fruits.size(); i++)
        {
            int j = 0;
            while(j < copyy.size() && copyy[j] < fruits[i])
                j++;
            if(j < copyy.size())
                copyy.erase(copyy.begin()+j);
        }
        return copyy.size(); 
    }
};