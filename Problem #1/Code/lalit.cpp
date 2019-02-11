#include<algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> same(nums);
    vector <int> ans(2);
    int other_no;
    vector <int>::iterator p;
    vector <int>::iterator index1;
    vector <int>::iterator index2;

    sort(same.begin(),same.end());

    for (int i=0; i<same.size(); i++)
    {
        other_no = target - same[i];
        p = find(same.begin()+i+1, same.end(), other_no);
        if (p == same.end())
            continue;

        index1 = find(nums.begin(), nums.end(), same[i]);
        ans[0] = index1 - nums.begin();

        if (same[i] == other_no)
            index2 = find(nums.begin()+ans[0]+1, nums.end(), other_no);
        else
            index2 = find(nums.begin(), nums.end(), other_no);


        ans[1] = index2 - nums.begin();

        return ans;

    }
 }
};
