#include <stdio.h>
#include <string.h>

// Sorting an array of integers using the bubble sort algorithm

int main() { //takes input array
    
    int l,i,t;
    printf("Enter the length of the array:");
    scanf("%d",&l);
    int a[l];
    printf("Enter %d integers:",l);

    //this loop iterates l times
    for (i=0;i<l;i++)
        scanf("%d",&a[i]);

    for (i=0;i<l-1;i++){  
        //this loop compares values and swaps, ignoring the last element after each iteration as it gets sorted
        for (int j=0;j<l-i-1;j++){

            if (a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }       
}   
    }
    for (i=0;i<l;++i)
        printf("%d\n",a[i]);
    return 0;
}