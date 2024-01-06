#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int numSize = nums.size() + 1;
        
        int *buf = (int *)malloc(sizeof(int) * numSize);
        memset(buf, 0, sizeof(int) * numSize);
        int index = 0;
        for (int idx = 0; idx < nums.size(); idx++)
        {
            index = nums[idx];
            buf[index]++;
        }
        int idx = 0;
        for (idx; idx < numSize; idx++)
        {
            if(buf[idx] == 0)
            {
                break;
            }
        }
        
        return idx;
    }
};