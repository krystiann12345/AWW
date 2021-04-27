#include <stdio.h>
int main()
{
    int a[1000],i,n,sum=0;
    printf("size of array:\t");
    scanf("%d",&n);
    for(i=0; i<n;i++)
    {
    printf("\nEnter Elements %d:\t",i + 1);
    scanf("%d",&a[i]);
    sum=sum + a[i];
    }
    printf("\nSum of all array elements:%d\n",sum);
    return 0;
}
