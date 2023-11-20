#include<stdio.h>
int main()
{
    int i,j; //Initialize variable//
    printf("The pattern is: \n"); //printing//
    for (i=0;i<5;i++) //loop for rows//
    {
        for (j=0;j<=i;j++) //loop for columns//
        {
            printf("*"); //printing the pattern//
        }
        printf("\n"); // going to the next line//
    }
    return 0;

}