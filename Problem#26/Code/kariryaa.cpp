class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int ans = 1;
        int len=nums.size();
        if(len<2) return len;
        for(int i=1;i<len;i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[ans++]=nums[i];
            }
        }
        return ans;
    }
};