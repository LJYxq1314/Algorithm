#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
#if 0
        vector<char> myVec;
        for (char c : s)
        {
            myVec.push_back(c);
            int flag = 0;
            for (int idx = 0; idx < myVec.size(); idx++)
            {
                // for(int jdx = 1; jdx < myVec.size(); jdx++)
                // {
                //     if(myVec[idx] == myVec[jdx])
                //     {
                //         flag = 1;
                //     }                    
                // }
                int jdx = idx + 1;
                while (jdx < myVec.size() && myVec[idx] != myVec[jdx])
                {

                    jdx++;
                }
                if(myVec[idx] == myVec[jdx])
                {
                    return -1;
                }
                else
                {
                    return idx;
                }
                
            }
        }
#endif
        const char *ptr = s.c_str();
        const char *bakptr = ptr;
        int frequency[26];
        memset(frequency, 0, sizeof(int) * 26);
        int index = 0;
        while (*ptr != '\0')
        {
            index = *ptr - 97;
            frequency[index]++;
            ptr++;
        }

        /* 指针归位 */
        ptr = bakptr;
        int pos = 0;
        while (*ptr != '\0')
        {
            if (frequency[*ptr - 97] == 1)
            {
                return pos;
            }
            pos++;
            ptr++;
        }
        return -1;
    }
};