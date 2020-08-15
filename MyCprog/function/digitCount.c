main()
{
	int digit,val,count=0;
	printf("enter the nunber ");
	scanf("%d",&val);
	while(val>0)
	{

	digit=val%10;
	count++;
	val =val/10;
		}
		printf("there are %d digits in %d",count,val);
}
