struct newDate 
{
int day;
int month;
long int year;
};
main()
{
struct newDate todaysDate;
printf("enter the todays's DD/MM/YY ");
scanf("%d%d%ld",&todaysDate.day,&todaysDate.month,&todaysDate.year);
printf("today's date is %d/%d/%ld,",todaysDate.day,todaysDate.month,todaysDate.year);
	
}
