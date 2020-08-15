main()
{
int q, fac;
printf("enter the value");
scanf("%d",&q);
fac=factorial (q);
printf("factorial of this number is %d",fac);

	
}
int factorial (int p)
{
	int i,f=1 ;
	for(i=1;i<=p;i++)
	f=f*i;
return f ;	
}
