#include  <stdio.h>

int main(void)

{
   int arr[1000];
    int sumarr=0;
    int cpid;
    int arrc=0,
    for(int i=0;i<1000;i++){ 
       for(int x=cpid;x<10;x++){
		 arr[i]=i;
         int cpid=fork();
         for(int arrc=cpid;arrc<100;arrc++){
           sumarr=sumarr+arr[arrc];
        }
            
	   }
    }
    printf("sum=%d\n",sumarr);
    return 0;
}
    
