#include <stdio.h>

int bubbleSort(int *pArray, int arrayLen)
{
    int ret = 0;
    for(int outidx = 0; outidx < arrayLen - 1; outidx++)
    {
        for(int inidx = 0; inidx < arrayLen - outidx - 1; inidx++)
        {
            if(pArray[inidx] < pArray[inidx + 1])
            {
                int tempVal = pArray[inidx];
                pArray[inidx] = pArray[inidx + 1];
                pArray[inidx + 1] = tempVal;
            }
        }
    }

    return ret;
}

int chooseSort(int *pArray, int arrayLen)
{
    
}
int main(int argc, char const *argv[])
{
    int Array[] = {5,3,7,9,2,4,1};
    printf(" %ld\n",sizeof(Array)/sizeof(Array[0]));

    bubbleSort(Array, sizeof(Array)/sizeof(Array[0]));

    for(int idx = 0 ;idx < sizeof(Array)/sizeof(Array[0]); idx++)
    {
        printf("%d ",Array[idx]);
    }
    return 0;
}
