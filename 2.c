#include<stdio.h>

main(){
	float base,HRA,TA,DA;
	float ans;
	
	printf("Enter the base salary: ");
	scanf("%f",&base);
	
	printf("Enter the HRA: ");
	scanf("%f",&HRA);
	
	printf("Enter the DA: ");
	scanf("%f",&DA);
	
	printf("Enter the TA: ");
	scanf("%f",&TA);
	
	ans = base + (base * HRA /100) + (base * DA /100) + (base * TA /100);
	
	printf("Ans:- %2.f",ans);
	
}
