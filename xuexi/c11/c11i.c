/*************************************************************************
	> File Name:zlh c11i.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年03月03日 星期二 20时21分19秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int i,j;

	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d	",i,j,i*j);
		}
		printf("\n");
	}
    return 0;
}
