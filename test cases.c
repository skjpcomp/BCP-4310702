#include <stdio.h>

int main()
{
    int testCases, a, b, c;

   
    printf("Enter number of test cases: ");
    scanf("%d", &testCases);

    
    for(int i=1; i<=testCases; i++)
    {
         
        printf("Enter the values for test case %d: ", i);
        scanf("%d%d%d", &a, &b, &c);

        
        if(a == b && b == c)
            printf("All are equal\n",i);
        else if(a != b && b != c && c != a)
            printf("All are different\n", i);
        else
            printf("Neither all are equal nor different\n",i);
    }

    return 0;
}