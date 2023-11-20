#include<stdio.h>

int main(){
    int n; //declaring variable
    printf("Enter the a number for calculating factorial: ");
    scanf("%d",&n); //reading n
    printf("The factorial of %d is: %d",n,fact(n)); //printing result
    return 0;
}
int fact(int n) //function to calculate factorial
{
    if (n==0)//base case
        return 1;
    return (n*fact(n-1));
}