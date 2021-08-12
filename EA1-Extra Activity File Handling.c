#include<stdio.h>

int main ()
{   int num, i, a[50];
    int Math, Science, English;
    char ave, avg;

FILE *fp;

fp = fopen("bacon.txt", "w");
fclose(fp);

fp = fopen("text.txt", "a");

{

    printf("Name: ");
    scanf("%s", &a[i]);
    fprintf(fp,"Name: " "%s\n", &a[i]);
}
{

    printf("ID: ");
    scanf("%s", &a[i]);
    fprintf(fp,"ID: " "%s\n", &a[i]);
}

{
    printf("Math Grade:" );
    scanf("%d", &Math);
    fprintf(fp,"\nMath:" "%d\n", Math);
}
{
    printf("Science Grade:" );
    scanf("%d", &Science);
    fprintf(fp,"Science:" "%d\n", Science);
}
{
    printf("English Grade:" );
    scanf("%d", &English);
    fprintf(fp,"English: " "%d\n\n", English);
}

avg=(Math+Science+English);
printf("Total Grade: %d\n" ,avg);
fprintf(fp,"Total Grade: " "%d\n", avg);

ave=(Math+Science+English)/3;
printf("Total Average: %d\n\n" ,ave);
fprintf(fp,"Total Average: " "%d\n", ave);

    fclose(fp);









fp = fopen("text2.txt", "w");
fclose(fp);

fp = fopen("text2.txt", "a");

{

    printf("Name: ");
    scanf("%s", &a[i]);
    fprintf(fp,"Name: " "%s\n", &a[i]);
}
{

    printf("ID: ");
    scanf("%s", &a[i]);
    fprintf(fp,"ID: " "%s\n", &a[i]);
}

{
    printf("Math Grade:" );
    scanf("%d", &Math);
    fprintf(fp,"\nMath:" "%d\n", Math);
}
{
    printf("Science Grade:" );
    scanf("%d", &Science);
    fprintf(fp,"Science:" "%d\n", Science);
}
{
    printf("English Grade:" );

    scanf("%d", &English);
    fprintf(fp,"English: " "%d\n\n", English);
}

 avg=(Math+Science+English);
printf("Total Grade: %d\n" ,avg);
fprintf(fp,"Total Grade: " "%d\n", avg);

 ave=(Math+Science+English)/3;
printf("Total Average: %d\n\n" ,ave);
fprintf(fp,"Total Average: " "%d\n", ave);



    fclose(fp);




return 0;
}

