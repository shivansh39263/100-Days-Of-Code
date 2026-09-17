// Q77: Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>

int main()
{
    int i,j,a[100][100];
    int row,column;

    printf("Enter the row of matrix:");
    scanf("%d",&row);

    printf("Enter the column of matrix:");
    scanf("%d",&column);

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=i+1;j<column;j++)
        {
            if(a[i][i]==a[j][j])
            {
                printf("false");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}