main()
{
int k;
k=sum(3);
printf("%d", k);

}

int sum(int k)
{
int val;
if(k==1)
return 1;
val=k+sum(k-1);
return val;

}
