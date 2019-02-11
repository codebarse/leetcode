class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> numExists;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
            numExists[nums[i]]=i;
        
        for(int i=0;i<nums.size();i++) {
            unordered_map<int,int>::iterator it = numExists.find(target-nums[i]);
            if(it!=numExists.end()){
                if(it->second!=i) {
                    ans.push_back(i);
                    ans.push_back(it->second);
                    break;
                }
            }
        }
        return ans;
    }
};