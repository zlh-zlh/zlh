/*************************************************************************
	> File Name:zlh c11f.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年03月03日 星期二 19时57分50秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int i,j,k;

	for(i=0;i<=3;i++)
	{
		for(j=2;j<6;j++)
		{
			for(k=8;k>4;k--)
			{
				printf("k=%d,j=%d,i=%d\n",k,j,i);
			}
			printf("j=%d,i=%d\n",j,i);
		}
		printf("i=%d\n",i);
	}
    return 0;
}
