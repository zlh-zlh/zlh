/*************************************************************************
	> File Name: c9a.c
	> Author: zlh
	> Mail: 15270248243@163.com 
	> Created Time: 2020年02月10日 星期一 14时42分51秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char ch;

    printf("请输入成绩：");
    scanf("%c",&ch);

    switch(ch)
    {
        case'A': printf("你的成绩在90分以上!\n"); break;
        case'B': printf("你的成绩在80分以上!\n"); break;
        case'C': printf("你的成绩在70分以上!\n"); break;
        case'D': printf("你的成绩在60分以上!\n"); break;
        case'E': printf("你的成绩在60分以下!\n"); break;
        default: printf("请输入有效分数\n");
    }

    return 0;
}
