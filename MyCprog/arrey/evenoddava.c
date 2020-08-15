main()
{
	int a[10],sumEven=0,sumOdd=0,i,countEven=0,countOdd=0;
	float avgEven,avgOdd;
	printf("enter the ten number");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	
	{
		if (a[i]%2==0)
		{
		sumEven=sumEven+a[i];
		countEven++;
		}
		
		else
		{
	
		sumOdd=sumOdd+a[i];
		countOdd++;
     	}		
    }
    printf("\ncount of even number is %d",countEven );
      printf("\ncount of odd number is %d",countOdd );
      
printf("\nsum of even numbers is %d  ",sumEven);
printf(" \n\n sum of odd numbers is %d ",sumOdd);

avgEven = sumEven/countEven;
avgOdd=sumOdd/countOdd;
printf ("\n Avarage of even number is %f",avgEven);
printf("\n Avarage of odd number %f",avgOdd);

}
