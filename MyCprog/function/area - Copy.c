main()
{
	double rad;
	printf("enter the value of radious");
	scanf("%lf",&rad);
circle (rad);	
}
void circle (double r)//take something return nothing
{
double  cercum, area;
cercum=2*3.14*r;
area=3.14*r*r;
printf("\ncercunference is %lf\n",cercum);
printf("\narea is %lf",area);
}
