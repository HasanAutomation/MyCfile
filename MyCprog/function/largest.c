main()
{
	int p, q, r,largest_no;
	printf("enter the three value");
	scanf("%d%d%d",&p,&q,&r);
	largest_no=largest (p,q,r);
	printf("largest value is %d",largest_no);
}

int largest (int a,int b,int c)
{
if (a>b & a>c)
return a ;

else if (b>c)
return b ;

else 
return c;
}
