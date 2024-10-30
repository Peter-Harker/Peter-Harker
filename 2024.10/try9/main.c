#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    char s[5];
    while(fgets(s,5,stdin)!=NULL)
        count++;

    printf("%d\n",count);
    return 0;
}
