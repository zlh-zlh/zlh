/*************************************************************************
	> File Name: c9b.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年02月14日 星期五 13时46分41秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b;

    printf("请输入2个数\n");
    scanf("%d %d",&a,&b);

    if(a!=b)
    {
        if(a>b)
        {
            printf("%d>%d\n",a,b);
        }
        else
        {
            printf("%d<%d\n",a,b);
        }
    }
    else
    {
        printf("%d=%d\n",a,b);
      
    }
    return 0;
}

