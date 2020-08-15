
void input (int *p,int n);
void display (int *p,int n);


main()
{
	
	int a[20],val;
	printf("enter the limit of the array\n");
	scanf("%d",&val);
	input(a,val);
	display(a,val);	
	printf("\n");
	display(a,val);	
	//sort 
	//
}

void input (int *p,int n)//call by reference nad call value
{
	int i;
    printf("enter numbers\n");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
}
void display (int *p,int n)
{
	
     int i;
	printf("values are\n");
	for(i=0;i<n;i++)
	printf("%d  ",*(p+i));
}
