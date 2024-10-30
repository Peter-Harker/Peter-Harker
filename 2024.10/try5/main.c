#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int a, b, c, x；
      printf("请输入三个整数:");
      scanf("%d %d %d",&a, &b, &c);
      if（a>b）{
          x=a；a=b；b=x；
      }
      if（a>c）{
          x=a；a=c；c=x；
      }
      if（b>c）{
          x=b；b=c；c=x；
      }
      printf("从小到大排列为:%d,%d,%d\n",a,b,c);


	  /*********End**********/
       return 0;
	}
