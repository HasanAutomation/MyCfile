main()
{
	int n;
	printf("Enter the limit number of nutural number ");
	scanf("%d",&n);
	printf("cube sum of the %d natral number is %d",n,cubeNumber(n));
}
int cubeNumber(int a)
{
	int result;
	if(a==1)
	return 1;
	else
	result=(a*a*a)+cubeNumber(a-1);
    //return result;
}
