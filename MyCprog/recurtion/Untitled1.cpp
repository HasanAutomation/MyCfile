#include<stdio.h>
#include<math.h>
int main()
{
    float *x, *y, sum, X, prod;
    int i, j, n;
    printf("\n\t\t<<Lagrange Interpolation>>\n");
    printf("==================================\n");
    printf("Enter given data=>\n");
    printf("-------------------------------------------------\n");
    printf("Total no. of points:\n");
    scanf("%d",&n);
    printf(".............................................\n");
    x= (float *)malloc(n*sizeof(float));
    y= (float *)malloc(n*sizeof(float));
    printf("Enter the x's points:\n");
    printf(".............................................\n");
    for(i=0;i<n;i++)
    {
        printf("x(%d)\t->\t",i+1);
        scanf("%f",&x[i]);
    }
    printf(".............................................\n");
    printf("Enter the y's points:\n");
    printf(".............................................\n");
    for(i=0;i<n;i++)
    {
        printf("y(%d)\t->\t",i+1);
        scanf("%f",&y[i]);
    }
    printf(".............................................\n");
    printf("Enter that point at which y is required:\n");
    scanf("%f",&X);
    printf("---------------------------------------------\n");
    sum=0.0;
    for(i=0;i<n;i++)
    {
        prod= y[i];
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                prod=prod*(X-x[j])/(x[i]-x[j]);
            }
        }
        sum=sum+prod;
    }
    printf("So, at x= %f\t->\ty(x)= %f\n",X,sum);
    printf("==================================\n");
    return 0;
}

