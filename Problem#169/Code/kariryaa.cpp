class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        int ans = nums[0];
        int count = 1;
        int len = nums.size();
        for(int i=1;i<len;i++)
        {
            if(nums[i]==ans)
                count++;
            else
            {
                count--;
                if(!count)
                {
                    ans=nums[i];
                    count=1;
                }
            }
        }
        return ans;
    }
};