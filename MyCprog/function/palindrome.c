main()
{
int p;
printf("Enter the number");
scanf("%d",&p);
isPalindrome (p);	
}
void isPalindrome (int n)
{
int rev=0,r,s;
s=n;
while(n>0)
{
r=n%10;
rev=10*rev+r;
n=n/10;
}
if (rev==s)
printf("%d number is palindrome",s);
else
printf("%d number is not palindrome",s);

}
