#include <stdio.h>



int main(int argc, char const *argv[])
{
    int array[7] = {9, 7, 2, 4, 5, 6, 3,};

    int arraySize = sizeof(array) / sizeof(array[0]);

    int maxProfit = 0;
    for(int idx = 0; idx < arraySize; idx++)
    {
        for(int jdx = idx + 1; jdx < arraySize; jdx++)
        {
            if(array[idx] - array[jdx] >= maxProfit)
            {
                maxProfit = array[idx] - array[jdx];
            }
        }
    }
    printf("%d\n", maxProfit);

    return 0;
}
