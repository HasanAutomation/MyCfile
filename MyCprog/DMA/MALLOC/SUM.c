#include<stdio.h>
main()
{
	
	int i,*p,n,sum=0;
	printf("enter the value");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	
	if(p==NULL)
	printf("Memory is not allocated");
	else 
	{
		printf("enter the element");
	    for(i=0;i<n;i++)
	    {
		
	    scanf("%d",(p+i));
	    sum+=*(p+i);
	
	    }
	    printf("sum of the value %d",sum);
	    
	}
	
	
}
