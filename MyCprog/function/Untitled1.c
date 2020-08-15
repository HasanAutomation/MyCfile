main()
{
	int value, p,ext;
//evenodd( 5 );
while(1)
{

	

printf("enter a number\n ");
scanf("%d",&p);

printf("enter a number to exit\n ");
scanf("%d",&ext);
value=evenodd( p );
if(value==0)
printf("%d is the even number ", p);
else 
printf("%d is the odd number" , p);
if (ext==10)
exit (0);
}
}

int evenodd (int x){
	return x%2;

/*if (x/2 == 0)
printf("%d is the even number",x);
else 
printf("%d is the  odd number",x);*/
 }
