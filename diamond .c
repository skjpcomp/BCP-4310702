//C program to make a design of tree with two different colours
 #include <stdio.h> 
int main() 
{
    int i, j;
    for(i=0; i<=10; i++) {
        for(j=0; j<=10; j++) {
            if(i==0 && j==3) {
                printf("*");
            }
            else if(i==1 && j==2) {
                printf("*");
            }
            else if(i==1 && j==4) {
                printf("*");
            }
            else if(i==2 && j==1) {
                printf("*");
            }
            else if(i==2 && j==5) {
                printf("*");
            }
            else if(i==3 && j==0) {
                printf("*");
            }
            else if(i==3 && j==6) {
                printf("*");
            }
            else if(i==4 && j==1) {
                printf("*");
            }
            else if(i==4 && j==5) {
                printf("*");
            }
            else if(i==5 && j==2) {
                printf("*");
            }
            else if(i==5 && j==4) {
                printf("*");
            }
            else if(i==6 && j==3) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

















    