main()
{
	int a,b,result;
	printf("Ernter the two numbers");
	scanf("%d%d",&a,&b);
	result=sum(&a,&b);//call by reference (actual arguments)
	printf("sum of %d and %d is %d",a,b,result);
	
}

int sum (int *p, int *q)//formal argumants
{
	int sum;
	sum = *p+*q;//p=a,q=b
	return sum;
}
