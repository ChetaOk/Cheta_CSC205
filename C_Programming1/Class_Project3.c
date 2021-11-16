#include <stdio.h>
int main(){
	char text[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
	char input;
	
	printf("Enter a character between A - J:  ");
	scanf("%c", &input);
	
	for(int n=0; n<=9; n++){
		if(input == text[n]){
			int a = n+1;
			int value = a+5;
			
			for(a; a<=value; a++){
				printf("%c\n", text[a]);
			}break;
		}
	}
	return 0;
}
