/*************************************************************************
	> File Name:zlh c11d.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年03月03日 星期二 12时02分59秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int i,num;
	_Bool flag = 1;
	printf("请输入一个整数:");
	scanf("%d",&num);

	for(i=2;i<num/2;i++)
	{
		if(num % i == 0)
		{
			flag = 0;
		}
	}
	if (flag)
	{
		printf("%d是一个素数\n",num);
	}
	else
	{
		printf("%d不是一个素数\n",num);
	}
      return 0;
}
