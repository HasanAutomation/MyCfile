
//W.A.P TO PRINT reverse even number
main()
{
	int i,naturalNumber,val,digit;
	printf("enter the limit of the natural number");
	scanf("%d",&val);
	for(i=1;i<=val;i++)
	{
		
	naturalNumber=i;
	digit=naturalNumber%10;
		
	printf("%d",2*digit);
	naturalNumber=naturalNumber/10;
	}
	

}
