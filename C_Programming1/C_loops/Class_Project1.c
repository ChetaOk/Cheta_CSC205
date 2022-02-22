#include <stdio.h>

int main(){
	char input;
	int price, servings;
	char change, order;
	
	printf("Welcome to Mama Cas Restaurant\n");
	printf("Please Make a selection from our menu\n");
	printf("Poundo Yam & Edinkaiko Soup -- Enter P\n");
	printf("Fried Rice and Chicken -- Enter F\n");
	printf("Amala & Ewedu Soup -- Enter A\n");
	printf("Eba & Egusi Soup -- Enter E\n");
	printf("White Rice & Stew -- Enter W\n");
	
	printf("Do you want to order (Y/N)\n");
	scanf("%c", &order);
	fflush(stdin);
	
	while(order == 'Y' || order == 'y'){
	loop:
		printf("Place Order now: \n");
		scanf("%c", &input);
		
		switch(input){
			case 'p':
				printf("You have selected Poundo Yam & Edikaiko Soup\n");
				printf("Would you like to change your order. Y/N\n");
				scanf("%s", &change);
				if(change == 'Y' || change == 'y'){
					goto loop;
				}else if(change == 'N' || change == 'n'){
					price = 3200;
					printf("The price for 1 serving of Poundo Yam is %d\n", price);
					printf("Select servings required\n");
					scanf("%d", &servings);
					
					price = price * servings;
					printf("Total Price for %d servings of Poundo Yam & Edikaiko Soup is %d\n", servings, price);
					printf("Thank you for your patronage!!!\n");
				}break;
			
			case 'f':
				printf("You have selected Fried Rice & Chicken\n");
				printf("Would you like to change your order. Y/N\n");
				scanf("%s", &change);
				if(change == 'Y' || change == 'y'){
					goto loop;
				}else if(change == 'N' || change == 'n'){
					price = 3000;
					printf("The price for 1 serving of Fried Rice & Chicken is %d\n", price);
					printf("Select servings required\n");
					scanf("%d", &servings);
				
					price = price * servings;
					printf("Total Price for %d servings of Fried Rice & Chicken is %d\n", servings, price);
					printf("Thank you for your patronage!!!\n");
				}break;
			
			case 'a':
				printf("You have selected Amala & Ewedu Soup\n");
				printf("Would you like to change your order. Y/N\n");
				scanf("%s", &change);
				if(change == 'Y' || change == 'y'){
					goto loop;
				}else if(change == 'N' || change == 'n'){
					price = 2500;
					printf("The price for 1 serving of Amala & Ewedu Soup is %d\n", price);
					printf("Select servings required\n");
					scanf("%d", &servings);
				
					price = price * servings;
					printf("Total Price for %d servings of Amala & Ewedu Soup is %d\n", servings, price);
					printf("Thank you for your patronage!!!\n");
				}break;
			
			case 'e':
				printf("You have selected Eba & Egusi Soup\n");
				printf("Would you like to change your order. Y/N\n");
				scanf("%s", &change);
				if(change == 'Y' || change == 'y'){
					goto loop;
				}else if(change == 'N' || change == 'n'){
					price = 2000;
					printf("The price for 1 serving of Eba & Egusi Soup is %d\n", price);
					printf("Select servings required\n");
					scanf("%d", &servings);
				
					price = price * servings;
					printf("Total Price for %d servings of Eba & Egusi Soup is %d\n", servings, price);
					printf("Thank you for your patronage!!!");
				}break;
		
			case 'w':
				printf("You have selected White Rice & Stew\n");
				printf("Would you like to change your order. Y/N\n");
				scanf("%s", &change);
				if(change == 'Y' || change == 'y'){
					goto loop;
				}else if(change == 'N' || change == 'n'){
					price = 2500;
					printf("The price for 1 serving of White Rice & Stew is %d\n", price);
					printf("Select servings required\n");
					scanf("%d", &servings);
					
					price = price * servings;
					printf("Total Price for %d servings of White Rice & Stew is %d\n", servings, price);
					printf("Thank you for your patronage!!!\n");
				}break;
			
			default:
				printf("You have entered an invalid input!!!\nPlease Try again.\nThank you.\n");
				break;
		}
	}
	return 0;
}
