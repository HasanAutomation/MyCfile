//write a prog to sum to add the digit of a number 
main()
{   
    int val , reamainder,sum=0 ;
	printf("enter the number ");
	scanf("%d",&val);
	 
	while (val !=0)
	{

	reamainder = val % 10;
	sum = sum + reamainder;
	val/=10;
		}
printf("sum of digit of your given number is %d ",sum)	;

    
}
