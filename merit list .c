#include<stdio.h>
int main()
{
    int marks[235],i,j,n=235,temp;
    printf("Enter the marks of 235 students: \n");
    for(i=0; i<n; ++i)
    {
        printf("Student %d: ",i+1);
        scanf("%d",&marks[i],i);
    }
    
    for(i=1; i<n; ++i)
    {
        for(j=0; j<(n-i); ++j)
            if(marks[j]<marks[j+1])
            {
                temp=marks[j];
                marks[j]=marks[j+1];
                marks[j+1]=temp;
            }
    }
    printf("\nDisplaying the Merit List: \n");
    for(i=0; i<n; ++i)
        printf("Student %d: %d\n",i+1,marks[i]);
    return 0;
}