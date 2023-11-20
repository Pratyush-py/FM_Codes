#include<stdio.h>
int main()
{
    int a; // variable initializing//

    char b[100],c; // variable initializing //

    double d; // variable initializing //

    printf("Enter a string: \n"); //printing instruction for user//

    scanf("%s",b); //Taking string input//

    printf("String entered is: %s\n",b);//printing string//

    printf("Enter an integer: \n"); //printing instruction for user//

    scanf("%d",&a); //Taking integer input//
    
    printf("Integer entered is: %d\n",a); //printing integer//

    printf("Enter a character: \n"); //printing instruction for user//

    scanf("%c",&c); //Taking char input from user//

    printf("Character entered is: %c\n",c); //printing character//

    printf("Enter a double: \n"); //printing instruction for user//

    scanf("%lf",&d); //Taking double input from user//
    
    printf("Double entered is: %lf\n",d);//printing double//
    return 0;
}