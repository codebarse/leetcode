class Solution {
public:
    int romanToInt(string s) {
        int len = s.size();

        map<char, int> mymap;
        mymap.insert(pair<char, int>('I', 1));
        mymap.insert(pair<char, int>('V', 5));
        mymap.insert(pair<char, int>('X', 10));
        mymap.insert(pair<char, int>('L', 50));
        mymap.insert(pair<char, int>('C', 100));
        mymap.insert(pair<char, int>('D', 500));
        mymap.insert(pair<char, int>('M', 1000));

        if (len == 1)
            return mymap[s[0]];

        int ans = 0;

        for (int i=0; i<len; i++)
        {   
            if (i == len-1 )
                ans =  ans + mymap[s[i]];
             
            else if (s[i]=='V' || s[i]=='L' || s[i]=='D' || s[i]=='M')
                ans = ans + mymap[s[i]];

            else if (s[i]=='I' && s[i+1]=='V')
            {
                ans = ans + 4;
                i++;
            }

            else if (s[i]=='I' && s[i+1]=='X')
            {
                ans = ans + 9;
                i++;
            }

            else if (s[i]=='X' && s[i+1]=='L')
            {
                ans = ans + 40;
                i++;
            }

            else if (s[i]=='X' && s[i+1]=='C')
            {
                ans = ans + 90;
                i++;
            }

            else if (s[i]=='C' && s[i+1]=='D')
            {
                ans = ans + 400;
                i++;
            }

            else if (s[i]=='C' && s[i+1]=='M')
            {
                ans = ans + 900;
                i++;
            }

            else 
                ans = ans + mymap[s[i]];
            


            
        }

        return ans;
    }
};
