main()
{
	int i,j;
	printf("\nenter the number upto which you want to print the armstrong number\n");
	scanf("%d",&j);
	printf("the list of armstrong number is  ");
	for(i=0;i<=j;i++)
	{

	isArmstrong (i);
		}
		
	
}
void isArmstrong (int a)
{
int sum=0, r,n;
n=a;
//for(a=1;a<2000;a++)//
while (a>0)
{
r=a%10;
sum=sum+r*r*r;
a/=10;
}
if (sum==n)
printf("%d  ",n);
	
}
