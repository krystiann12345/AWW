//C program that converts vowel into uppercase//
#include<stdio.h>
int main()
{
    char datastr[100];
    int k,v,c;
    v=c=0;
//user input//
    printf("Input a sentence: ");
    gets(datastr);
    k=0;
    while(datastr[k]!='\0')
    {
        if(datastr[k]=='a' || datastr[k]=='e' || datastr[k]=='i' || datastr[k]=='o' || datastr[k]=='u')
        datastr[k]=datastr[k]-32;
        k++;

        if(datastr[k]=='a' || datastr[k]=='e' || datastr[k]=='i' || datastr[k]=='o' || datastr[k]=='u')
        ++v;

        else if((datastr[k]>='a'&& datastr[k]<='z'))
        ++c;
    }
    printf("String converted: ");
    puts(datastr);


    printf("\n\nstring length: %d\n",k);
    printf("vowels: %d\n",v);
    printf("consonant: %d\n",c);
}
