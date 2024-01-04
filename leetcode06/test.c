#include <stdio.h>
#include <string.h>

#if 0
int findPalindromicstring(char *string, int stringLen)
{
    stringLen = strlen(string) + 1;
    char * pStr = string;
    while (* pStr != '\0')
    {       
        if(*pStr == ' ')
        {
            *pStr = *(pStr++);
        }
        pStr++;
    }

    printf("%s \n",string);
}
#endif

int findPalindromicstring(char *str, int strLen)
{
    strLen = strlen(str);

    // int *newStr = ()
    /* todo... */


    
}

int main(int argc, char const *argv[])
{
    char *testString = "AB  CDCba";

    int len = strlen(testString);
    printf("%d\n",len);

    findPalindromicstring(testString, len);
    return 0;
}
