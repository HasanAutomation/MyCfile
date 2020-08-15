char* reverse ( char *p);
main()
{ char str[30];
puts("enter a string ");
gets(str);
printf("%d",length(str));

printf("\n %s", reverse(str));
}

int length (char *p)
{
int i;
for(i=0;*(p+i)!='\0';i++);
return i ;
	
}
char* reverse ( char *p)
{
	int i,l;
	char temp;
	for(i=0;*(p+i)!='\0';i++)
	for(l=0;l<i/2;i++);
	{
		temp=*(p+l);
		*(p+l)=*(p+i-1-l);
		*(p+i-1-l)=temp;
	}
	return p;
}
