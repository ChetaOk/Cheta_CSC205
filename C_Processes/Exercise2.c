#include <stdio.h>
#include <unistd.h>
int main(){
	if(fork() == 0)
		if(fork())
			printf("Job well done!!\n");
			
	return 0;
}
