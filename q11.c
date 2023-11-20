#include<stdio.h>

int main()
{
    int Arr[100],i,j,n,temp,ArrB[100],large,pos;//Declaring variables
    printf("Enter number of integers in the array: ");//reading no. of elements
    scanf("%d",&n);

    printf("Enter the integers:");
    
    for(i=0;i<n;i++)  //loop for reading elements
        scanf("%d",&Arr[i]);
    
    printf("Array entered is: ");
    for(i=0;i<n;i++) //loop for printing array
    {
        printf("%d, ",Arr[i]);
        ArrB[i]=Arr[i];
    }
        printf("\n");

    for(i=0;i<n-1;i++)//bubble sort
    {
        for(j=0;j<n-i-1;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array (ascending order): "); //print sorted array
    for(i=0;i<n;i++)
        printf("%d, ",Arr[i]);
    printf("\n");

    for(i=0;i<n-1;i++)  //selection sort
    {
        large=ArrB[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if (large<ArrB[j])
            {
                large=ArrB[j];
                pos=j;
            }
        }
        ArrB[pos]=ArrB[i];
        ArrB[i]=large;
    }
    printf("Sorted array (descending order): "); //printing result
    for(i=0;i<n;i++)
        printf("%d, ",ArrB[i]);
    return 0;
}