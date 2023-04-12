#include<stdio.h>
void bubble_sort(int [],int);
void main()
{
    int n,i,a[100];
    printf("enter the element=");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
}
void bubble_sort(int x[],int y)
{
    int j,k,temp;
    for(j=0;j<y-1;j++)
    {
        for(k=0;k<y-j-1;k++)
        {
            if(x[k]>x[k+1])
            {
                temp=x[k];
                x[k]=x[k+1];
                x[k+1]=temp;

            }
        }
    }
}
