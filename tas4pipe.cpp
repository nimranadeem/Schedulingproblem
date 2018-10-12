#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<string.h> 
#include<sys/wait.h> 
 
 
int main(void)
{
    int arr[1000];
    int sum0,sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9=0;
    int add0,add1,add2,add3,add4,add5,add6,add7,add8,add=0;
    
    int fd[2];
    if (pipe(fd)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid=fork();
    if (cpid < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    
    if(cpid==0){
        for(int i=0;i<100;i++){
               add=add+arr[i];
            for(int j=0;j<10;j++){
               write(fd[1],&add0,sizeof(add0));
               write(fd[1],&add1,sizeof(add1));
               write(fd[1],&add2,sizeof(add2));
               write(fd[1],&add3,sizeof(add3));
               write(fd[1],&add4,sizeof(add4));
               write(fd[1],&add5,sizeof(add5));
               write(fd[1],&add6,sizeof(add6));
               write(fd[1],&add7,sizeof(add7));
               write(fd[1],&add8,sizeof(add8));
               write(fd[1],&add9,sizeof(add9));
                exit(0);
            }
        }
    }
    else{
        close(fd[1]);
        wait(NULL);
        for(int k=0;k<10;k++){
            read(fd[0],&add,sizeof(add));
            sum0=sum0+add0;
            sum1=sum1+add1;
            sum2=sum2+add2;
            sum3=sum3+add3;
            sum4=sum4+add4;
            sum5=sum5+add5;
            sum6=sum6+add6;
            sum7=sum7+add7;
            sum8=sum8+add8;
            sum9=sum9+add9;
            close(fd[0]);
    }        
            
    return 0;
}