main()
{
	int *p,*q,a,b;
	p=&a;
	q=&b;
	printf("enter two the value");
	scanf("%d%d",p,q);
	printf("sum of the numbers is %d",(*p+*q));
}
