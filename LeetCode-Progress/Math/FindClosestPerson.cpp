class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xdist, ydist;
        xdist = abs(x-z);
        ydist = abs(y-z);
        if(xdist < ydist)
            return 1;
        else if(ydist < xdist)
            return 2;
        return 0;
    }
};