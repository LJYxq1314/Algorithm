#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    if (!nums)
    {
        return NULL;
    }

    int *twoSum = (int *)malloc(sizeof(int) * 2);
    if (!twoSum)
    {
        return NULL;
    }
    memset(twoSum, 0, sizeof(int) * 2);
    for (int idx = 0; idx < numsSize; idx++)
    {
        for (int jdx = idx + 1; jdx < numsSize; jdx++)
        {
            if(target == nums[idx] + nums[jdx])
            {
                twoSum[0] = idx;
                twoSum[1] = jdx;
                *returnSize = 2;
            }
        }
    }
    return twoSum;
}

int main(int argc, char const *argv[])
{

    return 0;
}
