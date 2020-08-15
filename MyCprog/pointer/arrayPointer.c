//w.a.p to print n element of an array
main()
{
	int a[20],*p,i,val;
	p=a;//storeing the base adress in pointer p
	printf("How many value you want to take ? \n");
	scanf("%d",&val);
	printf("enter the numbers you want to  print\n");
	for(i=0;i<val;i++)
	scanf("%d",p+i);
	printf("your numbers are\n");
	for(i=0;i<val;i++)
	
	printf("%d  ",*(p+i));
	
	
	
}
