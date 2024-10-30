#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[1000];
    int i;
    gets(s1);
    FILE*outfile;
    outfile=("E\\esamp1.text","w");
    if(outfile==NULL)
        printf("不能打开");
        for(i=0;i<100;i++){
            fprintf("%c\n",s1[i]);
        }

    return 0;
}
