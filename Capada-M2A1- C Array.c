#include <stdio.h>
int main()
{
    int a[1000],i,n,sum=0;
    printf("size of array:\t"); //input numbers of array from user//
    scanf("%d",&n);
    for(i=0; i<n;i++)
    {
    printf("\nEnter Elements %d:\t",i + 1); //inputted elements from the user//
    scanf("%d",&a[i]);
    sum=sum + a[i];  //this will add all the elements the user inputted//
    }
    printf("\nSum of all array elements:%d\n",sum); //total of elements//
    return 0;
}
