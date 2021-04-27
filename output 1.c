#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, add,sub,mul;
    float div;
    printf("Enter any two number: ");
    scanf("%d%d", &num1, &num2);
    add = num1+num2;
    printf("\nAddition = %d", add);
    mul = num1*num2;
    printf("\nMultiplication = %d", mul);
    div = num1/(float)num2;
    printf("\nDivision = %.1f",div);
    sub = num1-num2;
    printf("\nSubtraction = %d", sub);

    return (0);
}
