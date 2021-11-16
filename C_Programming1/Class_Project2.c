#include <stdio.h>
int main(){
	float CSC201, CSC205, STA205;
	printf("Enter the score for CSC201\n");
	scanf("%f", &CSC201);
	printf("Enter the score for CSC205\n");
	scanf("%f", &CSC205);
	printf("Enter the score for STA205\n");
	scanf("%f", &STA205);
	
	float Total = CSC201+CSC205+STA205;
	float Average = (CSC201+CSC205+STA205)/3;
	float Percentage = ((CSC201+CSC205+STA205)/300)*100;
	
	printf("The total is:  %.2f\n", Total); 
	printf("The Average is:  %.2f\n", Average); 
	printf("The Percentage is:  %.2f\n", Percentage); 
}
