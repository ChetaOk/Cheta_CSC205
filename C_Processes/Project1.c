#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *childThread(void* args){
	int mypid, myppid; 
	mypid = getpid();
	myppid = getppid();
	printf("Process Parent id: %d,  Child Process id: %d\n", myppid, mypid);
	return NULL;
}

int main(){
	int n, gap;
	pthread_t pid;
	printf("Enter number of process\n");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		fork();
		printf("Process Created\n");
		gap=pthread_create(&pid, NULL, &childThread, NULL);
		
		if(gap==0){
			pthread_create(&pid, NULL, &childThread, NULL);
			pthread_join(pid, NULL);
		}else{
			printf("Parent process exist\n");
		}
	}
	return 0;
}
