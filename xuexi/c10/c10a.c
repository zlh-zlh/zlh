/*************************************************************************
	> File Name: c10a.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年02月14日 星期五 15时14分21秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int  i=1,sum=6;

    while(i<=100)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("结果是：%d\n",sum);

		return 0;
}

