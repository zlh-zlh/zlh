#include<stdio.h>
int main()
{
    int i;
    char j;
    float k;

    i=123;
    j='c';
    k=3.14;

    printf("size of int is %d\n",sizeof(int));
    printf("size of i is %d\n",sizeof(i));
    printf("size of char is %d\n",sizeof(char));
    printf("size of j is %d\n",(j));
    printf("size of float is %d\n",sizeof(float));
    printf("size of k is %d\n",(k));

    return 0;
}
