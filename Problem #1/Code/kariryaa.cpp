class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            int otherNum = target - nums[i];
            if(m[otherNum])
                return {m[otherNum]-1,i};           // for compiler that supports C++11
            m[nums[i]] = i+1;
        }
        return {};
    }
};