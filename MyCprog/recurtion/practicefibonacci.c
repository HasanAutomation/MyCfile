main()
{
	int i,x;
	printf("enter the value");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	printf("%d  ",fiv(i));
	
}

int fiv(int p)
{
if(p==0)
return 0;
if (p==1)
return 1;
return fiv(p-1)+fiv(p-2);
}
