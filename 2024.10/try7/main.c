#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[10];
    int i;
    int max;
    printf("«Î ‰»Î:");
    gets(s1);
    max=s1[0];
    for(i=0;i<11;i++){
        if(s1[i]>max)
            max=s1[i];
    }

printf("%c",max);
    return 0;
}
