//W.A.P to count digit in a number 
main()
{
	int val , count=0 ,num;
	printf("enter the number");
	scanf("%d",&val);
   while(val !=0)	
   {
 
	num=val%10;
	count++;
	val/=10;
	  }
printf("Digit in a number is %d",count);
}
