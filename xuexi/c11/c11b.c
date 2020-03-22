/*************************************************************************
	> File Name:zlh c11b.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年03月02日 星期一 14时00分44秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int count = 0;
	printf("shuru:");

	while(getchar() != '\n')
	{
		count =count+1;
	}
	printf("%d\n",count);
      return 0;
}
