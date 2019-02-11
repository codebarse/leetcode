class Solution
{
public:
    int countPrimes(int n)
    {
        if(n<3)
            return 0;
        int count = 1;
        bool arr[n] = {true, true};
        for(int i=4;i<n;i+=2)
            arr[i] = true;
        for(int i=3;i<n;i+=2)
        {
            if(!arr[i])
            {
                count++;
                for(int j=2*i;j<n;j+=i)
                {
                    arr[j] = true;
                }
            }
        }
        return count;
    }
};