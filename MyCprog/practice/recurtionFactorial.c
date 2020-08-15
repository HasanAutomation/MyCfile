
main()
{
	int a ;
	{
		printf("enter the value");
		scanf("%d",&a);
		printf("the result of the factorial is %d",fact(a));
	}
}

int fact(int n)

	{
		int ans;
		if (n==0)
		return 1 ;
		else 
		{
			ans= n*fact(n-1);
			//return ans;
		}
		
	}
	
