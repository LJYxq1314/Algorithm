#include <stdio.h>

#define ARRAY_SIZE 5

/*
        1   2   3
        4   5   6
        7   8   9

        1   4   7
        2   5   8
        3   6   9
*/

int main(int argc, char const *argv[])
{
    int Array[ARRAY_SIZE][ARRAY_SIZE] = {0};
    int count = 1;
    for(int idx = 0;idx < ARRAY_SIZE; idx++)
    {
        for(int jdx = 0;jdx < ARRAY_SIZE; jdx++)
        {
            Array[idx][jdx] = count;
            count++;
        }
    }
    
    for(int idx = 0; idx < ARRAY_SIZE; idx++)
    {   
        for(int jdx = 1; jdx < ARRAY_SIZE; jdx++)
        {
            if(idx <= jdx)
            {
                int temp = Array[idx][jdx];
                Array[idx][jdx] = Array[jdx][idx];
                Array[jdx][idx] = temp;
            }
        }
        
    }

    for(int idx = 0; idx < ARRAY_SIZE; idx++)
    {
        for(int jdx = 0; jdx < ARRAY_SIZE; jdx++)
        {
            printf("Array[%d][%d] = %d   ", idx, jdx, Array[idx][jdx]);
        }
            printf("\n");

    }
    printf("\n");

    return 0;
}
