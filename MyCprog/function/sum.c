main()
{
	int result, p;
	printf("enter the value");
	scanf("%d",&p);
	result=sum(p);
	printf("sume is %d",result);
		
}
int sum(int n)
{
	int f=0,i;
	for(i=1;i<=n;i++)
	f=f+i;
	return f;
}
