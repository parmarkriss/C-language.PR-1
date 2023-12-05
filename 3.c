#include<stdio.h>

main(){
	int first,second,third;
	
	printf("Enter the First: ");
	scanf("%d",&first);
	
	printf("Enter the Second: ");
	scanf("%d",&second);
	
	third = 180 - (first * second);
	
	printf("Third angle: %2.d\n",third);
}
