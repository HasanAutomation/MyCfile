//string
//count vowel
#include<stdio.h>
#include<string.h>
main()
{
	char str[30];
	int i,c=0;
	
	printf("Enter the string");
	gets(str);
	//scanf("%s", &srt[i]);
	for(i=0;str[i]!='\0';i++);
	{
		if(str[i]=='a'|| str[i]=='A' || str[i]=='e' ||str[i]=='E' || str[i]=='i' || str[i]=='I'|| str[i]=='O' || str[i]=='o'  || str[i]=='u' || str[i]=='U' )
		{
	
	c++;
		}
		
	}
	printf("number of viowel is %d",c);
}
