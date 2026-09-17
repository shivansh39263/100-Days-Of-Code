#include<stdio.h>
int main()
{
    int row,column,a[100][100];
    int i,j,sum=0;

    printf("Enter the row of matrix:");
    scanf("%d",&row);

    printf("Enter the column of matrix:");
    scanf("%d",&column);

    printf("Enter the elements of matrix:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        scanf("%d",&a[i][j]);
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("The sum of Diagonal is : %d",sum);
    return 0;
}