#include <stdio.h>
int main(){
	int age;
	printf("Enter Users Age.\n");
	scanf("%d", &age);
	
	if(age>=18){
		printf("You can vote");
	}else{
		printf("You cannot vote");
	}
}
