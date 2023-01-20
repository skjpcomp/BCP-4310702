

#include <stdio.h>
int main()
{
    int n,c,d;
    printf("Enter the number of rows and columns in the grid\n");
    scanf("%d%d",&n,&c);
    int a[n][c],b[n][c];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<c; j++)
        {
            a[i][j]=0;
        }
    }
    printf("The grid is as follows\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int x=1,y=1;
    a[x][y]=1;
    b[0][0]=x;
    b[0][1]=y;
    int l=1;
    printf("The game starts now\n");
    while(1)
    {
        printf("Enter the direction in which you want to move\n");
        printf("1.Up\n2.Down\n3.Left\n4.Right\n");
        scanf("%d",&d);
  }
      
    return 0;
}