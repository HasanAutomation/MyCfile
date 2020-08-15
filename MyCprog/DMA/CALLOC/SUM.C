#include<stdio.h>
#include<stdlib.h>
main()
{
	int i ,n , *p,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	
	p=(int *)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("enter the value");
		
	}
else
{
	printf("enter the value");
	for(i=0;i<n;i++)
	{

	scanf("%d",(p+i));
	sum+=*(p+i);
		}
	printf("sum of the value is %d",sum);	
}

}


