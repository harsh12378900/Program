#include<stdio.h>
int main()
{
    int a[3][3],b[3][4],i,j,c=0;
   
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter the value of 1 array :%d %d=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)


        {
            printf("\n enter the value of 2 array : %d %d=",i,j);
            scanf("\n %d",&b[i][j]);
        }  
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
              c=c+a[i][j]+b[i][j];

            }
        }
        printf("the addition of array \n %d",c);
        return 0;


    }