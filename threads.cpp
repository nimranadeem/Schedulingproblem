#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
 
void* sumarr(void* s1) 
{  
    int thread_p= int s1; 
    for (int i=0;i<100;i++) 
        s1[thread_p]=s1[thread_p]+arr[i];
    return ((void*)thread_p);	
}  
 
int main() 
{
   int arr[1000];
   pthread_t thread_t1[10];   
   int sarr[10]={0}; 
   int scount=0;      
   int addsum=0;
   pthread_t thr[10]; 
   for (int i=0;i<10;i++){ 
       pthread_create(&thread_t1[i],NULL,sumarr,(void*)NULL);   
   }
   for (int i=0;i<10;i++){ 
       pthread_join(thread_t1[i],(void**),NULL); 
   } 
   int addsum = 0; 
   for (int i=0;i<10;i++){ 
       addsum=addsum+sum[i];
   }	   
   printf("sum is %d\n",addsum); 
   return 0; 
} 
