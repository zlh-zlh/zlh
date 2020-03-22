/*************************************************************************
	> File Name: c82.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年02月10日 星期一 14时13分16秒
 ************************************************************************/

#include<stdio.h>
int main()
{   
    int i; 

    printf("请输入分数： ");
    scanf("%d",&i);

    if(i >= 90)
    {
        printf("A\n");
    }
    else if(i>=80)
    {
        printf("B\n");
    }    
    else if(i>=70)
    {
        printf("C\n");
    }
    else if(i>=60)
    {
        printf("D\n");
    }
    else if(i<60)
    {
        printf("E\n");
    }

    return 0;
}
