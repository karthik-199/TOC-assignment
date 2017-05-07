#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char *ip,*q;

int ip_val[3]= {0,5,10};
char *ip_array[3]={"0rs","5rs","10rs"};
char *q_array[4]={"No coin","Sum is 5 rs","Sum is 10 rs","Vend"};
int total_sum=0;

ip=ip_array[rand()%3];//0 rs
q=q_array[rand()%4];//no coin

	if(q==q_array[0])
	{
      		printf("Current state is: %s state\n",q_array[0]);
               
		if(ip==ip_array[0])
		{
 			printf("You entered %s into the vending machine\n\t",ip_array[0]);
			total_sum+= ip_val[0];				
			printf("going to next state: %s\n",q_array[0]);
			q=q_array[0];
			ip=ip_array[rand()%4];
		}	
		if(ip==ip_array[1])
		{
			printf("You entered %s into the vending machine\n\t",ip_array[1]);
  			total_sum+= ip_val[1];				
  			printf("going to next state: %s\n",q_array[1]);
			q=q_array[1];
			ip=ip_array[rand()%4];
		}
		if(ip==ip_array[2])
		{
		 	printf("You entered %s into the vending machine\n\t",ip_array[2]);
 			total_sum+= ip_val[2];				
 			printf("going to next state: %s\n",q_array[2]);
			q=q_array[2];
			ip=ip_array[rand()%4];
		}
	}

	if(q==q_array[1])
	{
		printf("Current state is: %s state\n",q_array[1]);
			
		if(ip==ip_array[0]) 
		{
			printf("You entered %s into the vending machine\n\t",ip_array[0]);
   			total_sum+= ip_val[0];				
  	 		printf("going to next state: %s\n",q_array[1]);
   			q=q_array[1];
  			ip=ip_array[rand()%4];
		}	
		if(ip==ip_array[1]) 
		{
			printf("You entered %s into the vending machine\n\t",ip_array[1]);
   			total_sum+= ip_val[1];				
  	 		printf("going to next state: %s\n",q_array[2]);
   			q=q_array[2];
  			ip=ip_array[rand()%4];
		}	
		if(ip==ip_array[2]) 
		{
			printf("You entered %s into the vending machine\n\t",ip_array[2]);
			total_sum= ip_val[0];
			printf("Here is your product...\n n\n\t");				
  			printf("going to next state: %s\n",q_array[0]);
			q=q_array[0];
   			ip=ip_array[rand()%4];
		}
	}


	if(q==q_array[2])
	{
		printf("Current state is: %s state\n",q_array[2]);
			
		if(ip==ip_array[0]) 
		{
			printf("You entered %s into the vending machine\n\t",ip_array[2]);
   			total_sum+= ip_val[0];				
  	 		printf("going to next state: %s\n",q_array[2]);
   			q=q_array[2];
  			ip=ip_array[rand()%4];
		}	
		if(ip==ip_array[1]) 
		{
			printf("You entered %s into the vending machine\n\t",ip_array[1]);
   			total_sum+= ip_val[0];				
  	 		printf("Here is your purchased item.\n");
  			printf("going to next state: %s\n",q_array[0]);
			q=q_array[0];
  			ip=ip_array[rand()%4];
		}	
		if(ip==ip_array[2]) 
		{
			printf("You entered %s into the vending machine\n\t",ip_array[2]);
			total_sum= ip_val[1];
			printf("Here is your purchased item.");
  			printf("going to next state: %s",q_array[1]);
			q=q_array[1];
   			ip=ip_array[rand()%4];
		}
	}

return 0;
} 

