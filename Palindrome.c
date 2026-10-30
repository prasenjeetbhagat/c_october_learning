#include<stdio.h>
int main(){
		int num,rev=0,rem;
	printf("Enter the Palindrome Number:");
	scanf("%d",&num);
	
	int temp=num;

	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	
if(rev==temp)
{
	printf("This is palidrome");
}
else{
	printf("this is not a palindrome");
}



	return 0;
}
