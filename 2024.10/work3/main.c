#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[10];
    int a=0,b=0,c=0,i;
    gets(s1);
    for(i=0;i<10;i++){
        if(s1[i]>96&&s1[i]<123)
            a++;
        if(s1[i]>64&&s1[i]<91)
            b++;
        if(s1[i]='\0')
            c++;
    }
    if(c==10)
        printf("�մ�\n");

    printf("��д��%d\nСд��%d\n",b,a);

    return 0;
}
