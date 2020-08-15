main()
{
	int a[10],i,lan;
	int gratest=-100000;
	int smallesrt =100000;
	printf("enter the count of a number,the count number must be within 10 : ");
	scanf("%d",&lan);
	if(lan>10)
	{
	printf("this is invalid..");
		}
	for (i=0;i<lan;i++)
	{

	printf("enter the number");
	scanf("%d",&a[i]);
	}
	for(i=0;i<lan;i++)
	{
		if(gratest<a[i])
		gratest=a[i];
		
	if(smallesrt>a[i])
		smallesrt=a[i];	
	}
	printf("\ngratest number is %d",gratest);
	printf("\nsmallesrt number is %d",smallesrt);
}

