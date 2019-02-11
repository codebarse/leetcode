class Solution {
public:

    int min(int a, int b)
    {
        if (a<b)
            return a;
        return b;
    }
    int maxArea(vector<int>& height) {

        int len = height.size();
        int max_area = 0;
        int i=0, j=len-1;

        while (i<j)
        {
            int area = min(height[i], height[j]) * (j-i);

            if (area>max_area)
                max_area = area;

            if (min(height[i], height[j]) == height[i])
                i++;
            else
                j--;
        }


        return max_area;
        
    }
};
