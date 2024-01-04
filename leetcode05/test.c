#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//   非连续有序数组：
//        [1,1,2,2,3,5,7,19] 和 [2,7,9,12,17]
//    合并为：
//        [1,1,2,2,3,3,5,7,7,9,12,17,19]

/* 数组作为函数返回值 */
int *mergeOrderNums(int *Array1, int numSize1, int *Array2, int numSize2, int *newSize)
{
    int * newArray = (int *)malloc(sizeof(int) * (numSize1 + numSize2));
    if(!newArray)
    {
        return NULL;
    }
    memset(newArray, 0, sizeof(int) * (numSize1 + numSize2));
    
    /* 踩内存 */
#if 0
    int newidx = 0;
    int idx1 = 0;
    int idx2 = 0;
    int tempidx = 0;
    for(int idx1 = 0; idx1 < numSize1; idx1++)
    {
        for(int idx2 = 0; idx2 < numSize2; idx2++ )
        {
            if(Array1[idx1] <= Array2[tempidx])
            {
                newArray[newidx] = Array1[idx1];
                newidx++;
                break;
            }
            else if(Array1[idx1] > Array2[tempidx])
            {
                newArray[newidx] = Array2[tempidx];
                newidx++;
                tempidx++;

            }
        }
        
    }

#endif

#if 1
    int pos1 = 0;
    int pos2 = 0;
    int pos3 = 0;

    while (pos1 < numSize1 && pos2 < numSize2)
    {
        if(Array1[pos1] <= Array2[pos2])
        {
            newArray[pos3] = Array1[pos1];
            pos1++;
        }
        else
        {
            newArray[pos3] = Array2[pos2];
            pos2++;
        }
        pos3++;
    } // pos1 == num1size || pos2 == num2size

    if (pos1 == numSize1)
    {
        for (int idx = pos2; idx < numSize2; idx++)
        {
            newArray[pos3] = Array2[idx];
            pos3++;
        }
    }
    else if(pos2 == numSize2)
    {
        for (int idx = pos1; idx < numSize1; idx++)
        {
            newArray[pos3] = Array1[idx];
            pos3++;
        }
    }

    #endif
    *newSize = numSize1 + numSize2;
    return newArray;
}

int main(int argc, char const *argv[])
{
    int num1[] = {1, 1, 2, 2, 3, 5, 7,19};
    int num2[] = {2, 7, 9, 12, 17};

    int len1 = sizeof(num1) / sizeof(num1[0]);
    int len2 = sizeof(num2) / sizeof(num2[0]);

    int len3 = 0;
    int *num3 = mergeOrderNums(num1, len1, num2, len2, &len3);

    for (int idx = 0; idx < len3; idx++)
    {
        printf(" %d", num3[idx]);
    }
    printf("\n");

    free(num3);
    return 0;
}
