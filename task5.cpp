
#include  <stdio.h>

int main(void)
{
    int arr[1000];
   
    for(int cpid=0;cpid<9;cpid++){
        for(int i=0;i<9;i++){
       // fork();
         int cpid=fork();
        
        arr[i]=rand()%10;
        printf(arr[i]);
    }
   }
    return 0;
}