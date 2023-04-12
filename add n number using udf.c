//WAP to create a function which is used to add first n numbers using UDF
#include<stdio.h>
int add(int);
void main()
{
    int sum,n;
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    sum=add(n);
    printf("total sum=%d",sum);

}
int add(int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
    sum=sum+i;
    }
    return sum;
}
