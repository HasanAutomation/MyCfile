//0 1 1 2 3 5 8 13
main()
{
	int i;
	for(i=0;i<20;i++)
printf("%d ",fib (i));
	
}

int fib ( int a)
{
	if(a==0)
	return 0;
	if (a==1)
	return 1;
	return fib (a-1)+fib(a-2);	
}
