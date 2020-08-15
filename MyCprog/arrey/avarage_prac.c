main()
{
	int i,a[10],sum=0,lan;
	double avg ;
	printf("enter the count of the  number which is within 10 :");
	scanf("%d",&lan);
	if (lan>10)
	{
		printf("this count is invalid....");
	}
	//else
	

	for(i=0;i<lan;i++)
	{

	printf("enter the number\n");
	scanf("%d",&a[i]);
}
	for(i=0;i<lan;i++)
	{
		sum=sum+a[i];
		
	}
	avg=sum/lan;
	printf("avarage of the number is %lf",avg);
		
}
