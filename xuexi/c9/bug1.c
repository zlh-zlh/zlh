/*************************************************************************
	> File Name: bug1.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年02月14日 星期五 14时06分42秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char kong,yu;

    printf("雨神是否有空？(Y/N)\n");
    scanf("%c",&kong);

    getchar();

    printf("是否下雨?(Y/N)\n");
    scanf("%c",&yu);

    if (kong == 'Y')
      {
        if(yu == 'Y')
        {
            printf("记得带伞\n");
        }
        else
        {
            printf("一起去看电影\n");
        }
      }
    else
    {
        printf("雨神没空\n");
    }
	  return 0;
}

