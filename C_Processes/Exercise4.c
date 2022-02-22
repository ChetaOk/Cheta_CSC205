#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void folktale(){
	int a=1, a1, a2;
	if(fork() == 0){
		a1 = a+5;
		printf("A1 = %d\n", a1);
		
	}else{
		a2 = a-5;
		printf("A2 = %d\n", a2);
	}
}

int main(){
	folktale();
	folktale();
	return 0;
}
