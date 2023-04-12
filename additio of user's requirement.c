//ask user to perform addition every time using udf.
#include<stdio.h>
int add();
int main()
{
    int a,b,c;
    printf("enter value of a & b:");
    scanf("%d%d",&a,&b);
    printf("\n ans=%d",c);
    c=add();
}
int add()
{
    int c,a,b;
    c=b+a;
    return c;
}


