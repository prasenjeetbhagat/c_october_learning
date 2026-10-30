#include<stdio.h>
int main()
{
	int first=0,second=1,next,i;
	printf("%d\n%d\n",first,second);
	for(i=3;i<=10;i++)
	{
		next=first+second;
		printf("%d\n",next );
	    first=second;
	    second=next;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
