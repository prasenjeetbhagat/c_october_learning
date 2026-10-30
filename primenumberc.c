//prime number accept a number from user ,hint divisble by only two numbers...
#include <stdio.h>
int main(){
	int i,num,count=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("The number is prime number");
		
	}
	else{
		printf(" Not prime");
	}
	return 0;
}
