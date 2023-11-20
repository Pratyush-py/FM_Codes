#include<stdio.h>

int main() //takes input arr and key
{
   
    int c, f, l, m, n, search, arr[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n", n);

    for ( c = 0 ; c < n ; c++ )
        scanf("%d",&arr[c]);
    printf("Enter value to find\n");
    scanf("%d",&search);

    f = 0;
    l = n - 1;
    m = (f+l)/2;
    //verifies if the array is sorted

    while( f <= l )
    {
        //compares key value to the m, if it's greater then searches again and shifts the m value
        if ( arr[m] < search )
            f = m + 1;
        else if ( arr[m] == search )//if both are equal, returns the position
        {
            printf("%d found at location %d.\n", search, m+1);
            break;
        }
        else
            l = m - 1;//otherwise shifts the m value and searches on the left side 
        m = (f + l)/2;
    }
    if ( f > l )
        printf("Not found! %d is not present in the list.\n", search);
    return 0;
}