#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[7];
    int b[6];
    int i;
    int x;
    for(i=0;i<8;i++){
        printf("请输入七个整数:");
        a[i]=getchar();
        getchar();
    }
    if(i=7){
    for(x=0;x<7;x++){
        b[x]=a[x]-a[x+1];
        printf("%d\t",b[x]);}
    }

    return 0;
}
