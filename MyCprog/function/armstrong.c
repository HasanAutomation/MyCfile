main()
{
int num, result;	
printf("enter the number");
scanf("%d",&num);
result= isAmstrong(num);
if(num==result)
printf("%d is an armstrong number ",num);
else
printf("%d is not an armstrong number",num);
}

int isAmstrong (int a )
{
	int sum=0 ,r;
	while (a>0)
	{
	r=a%10;
	sum=sum+r*r*r;
	//n=n/10;
	a/=10;
	
		}
return sum ;
	}
