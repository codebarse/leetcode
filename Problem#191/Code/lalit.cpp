// basically jab -1 karunga toh hamesha left most 1 affect hoga and & kerne ke baad vo zero ho jaega and baaki sab sahi rahega 
// yahi agle waale 1 ke liye bhi valid and do this jab we dont finsh all the 1s.


class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int result=0;
        while (n)
        {
            n=n&(n-1);
            result++;
        }
        return result;
    }
};
