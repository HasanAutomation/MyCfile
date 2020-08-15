/*Bisection method*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
    float f;
    f= 3*x-cos(x)-1;
    return f;
}
int determine_a(int k)
{
    int a;
    lebel1: a=f(k);
    if(a<0)
    {
        return k;
    }
    else
    {
        k--;
        goto lebel1;
    }
    return k;
}
int determine_b(int k)
{
    int b;
    lebel2: b=f(k);
    if(b>0)
    {
        return k;
    }
    else
    {
        k++;
        goto lebel2;
    }
}
int main()
{
    int i=0, j=0, count=0;
    float a, b, x0, e;
    printf("\n\t\t<<Bisection method>>\n");
    printf("==================================\n");
    printf("Enter accurecy:\n");
    scanf("%f",&e);
    printf("---------------------------------------------------------------\n");
    do
    {
        a=determine_a(i);
        b=determine_b(j);
        i--;
        j++;
    } while (f(a)*f(b)>0.0);
    printf("---------------------------------------------------------------\n");
    printf(">>Consider the following table:\n");
    printf("---------------------------------------------------------------\n");
    printf("\nI\t   a\t\t   b\t\t   x\t\t   f(x)\n");
    printf(".............................................................\n");
    do
    {
        x0=(a+b)/2.0;
        printf("%d\t%f\t%f\t%f\t%f\n",count+1,a,b,x0,f(x0));
        if(f(a)*f(x0)<0.0)
        {
            b=x0;
        }
        else
        {
            a=x0;
        }
        count=count+1;
    } while (fabs(f(x0))>e&&count<=20);
    printf("---------------------------------------------------------------\n");
    printf("The root of the equation= %f\n",x0);
    printf("==================================\n");
    return 0;
}

