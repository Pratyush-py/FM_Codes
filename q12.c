#include <stdio.h>  
#include <stdlib.h>  
   
int main()  
{   char ch;  
    FILE *file;  
    int cnt = 0;  
      
    file = fopen("data.txt","r");  //Opens a file in read mode  
      
    while((ch = fgetc(file)) != EOF){  //Gets each character till end of file is reached and counts each word  
        if(ch ==' ' || ch == '\n')  
            cnt++;  
    }  
    printf("Number of words present in given file: %d", cnt);  
    fclose(file);  
      
    return 0;  
}  