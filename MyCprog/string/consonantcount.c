//count consonant
#include<stdio.h>
#include<string.h>
main()
{
 char str[30];
 int c=0,i;
 printf("enter the string");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 
{
	if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
	{
		if(str[i]!='a'|| str[i]!='A' || str[i]!='e' || str[i]!='E' || str[i]!='i' || str[i]!='I'|| str[i]!='O' || str[i]!='o'  || str[i]!='u' || str[i]!='U')
		{
		c++;
		}
	}
}
     printf("number of the %d",c);
}



