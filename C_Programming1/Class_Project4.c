#include <stdio.h>

int main(){
	char user_experience;
	int age, salary; 
	
	printf("Does user have Experience? Y/N \n");
	scanf("%s", &user_experience);
	
	printf("Enter user age \n");
	scanf("%d", &age);
	
	if(user_experience=='y' && age>=40){
		salary = 560000;
		printf("The users salary is $%d\n", salary);
	}else if(user_experience=='y' && age>=30){
		salary = 480000;
		printf("The users salary is $%d\n", salary);
	}else if(user_experience=='y' && age<=29){
		salary = 300000;
		printf("The users salary is $%d\n", salary);
	}else if(user_experience=='n'){
		salary = 100000;
		printf("The users salary is $%d\n", salary);
	}else{
		printf("Error!!!\n");
	}
}
