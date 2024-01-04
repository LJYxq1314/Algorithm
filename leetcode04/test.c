#include <stdio.h>
#include <stdlib.h>

int in_Place_Sort(int *pArray, int targetVal, int arrayLen)
{
    int ret = 0;
    int pos = 0, idx = 0;

    /* error*/
    #if 0
    int Array[] = {3,2,1,7,5,2};
    传不进来
    int arrayLen = sizeof(pArray)/sizeof(pArray[0]);
    #endif

    for(idx = 0; idx < arrayLen; idx++)
    {
        if(pArray[idx] != targetVal)
        {
            pArray[pos] = pArray[idx];
            printf("%d ",pArray[pos]);
            pos++;
        }
    }                                      
    return ret;
}

int main(int argc, char const *argv[])
{
    int Array[] = {3,2,1,7,5,2};
    int arrayLen = sizeof(Array)/sizeof(Array[0]);
    in_Place_Sort(Array, 2, arrayLen);
    return 0;
}
