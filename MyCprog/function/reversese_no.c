main()
{
	int p,reversese_no;
	printf("Enter the value");
	scanf("%d",&p);
	reversese_no=reverse (p);
	printf("your reverse number is %d",reversese_no);
}
int reverse (int n)
{
	int rev=0,r;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;

	}
return rev;	
}


