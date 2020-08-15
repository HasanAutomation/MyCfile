main()
{
int f,n;
printf("enter the value");
scanf("%d",&n);
f=fact(n);///calling
printf("%d",f);
}
int fact(int a)
{
int val;
if(a==0)//termination point
return 1;
val=a*fact(a-1);
return val;
}
