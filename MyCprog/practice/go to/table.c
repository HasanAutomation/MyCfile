int main()
{
int i=1 ,num;
printf("enter the number whose table you want to print");
scanf("%d",&num);
table:
printf("%d*%d=%d\n",num,i,num*i);
i++;
if(i<10)
goto table;

}

