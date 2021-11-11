#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100];
  	int i, j, len, startIndex, endIndex;

  	printf("Enter any String :  ");//display
  	gets(str);                      //use to read string from user

  	len = strlen(str);//strlen is used to find the string length it counts the number of char
  	endIndex = len - 1;

  	printf("\nReverse ordered words\n");//display
  	for(i = len - 1; i >= 0; i--)   //we use for loop to iterate each and every character to string
	{
		if(i == 0)    //if idex is equal to 0
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= endIndex; j++)
			{
				printf("%c", str[j]);       //%c means printing a character
			}
		}
	}

  	return 0;
}
