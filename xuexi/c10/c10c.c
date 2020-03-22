/*************************************************************************
	> File Name: c10c.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年02月15日 星期六 20时51分01秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int count=0;

    printf("请输入:");

    while(getchar() != '\n')
    {
        count=count+1;
    }

    printf("%d\n",count);
		return 0;
}

