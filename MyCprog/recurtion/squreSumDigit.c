main()
{
	int a ;
	printf("enter the number");
	scanf("%d",&a);
	printf("sum of the digit of the number is %d", squreSum(a));
	
}
int squreSum(int n)
{
	int result;
	if(n==0)
	return 0;
	else
	{
		result=((n%10)*(n%10))+squreSum(n/10);
		//return result;
	}
	   
}
//inp-- 234
//oup -- 2*2+3*3+4*4
