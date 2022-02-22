#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int entry=0;

void *OperationChecker(void *tid){
    
    	char *operate = (char*) tid;
    	
    	printf("%ld \t %s\n", pthread_self(), operate);
}

int main(){
	int x;
	char operations[100][20];
	
	printf("Enter Number of Operations ");
	scanf("%d", &entry);
	
	int n = entry*(entry+1);
	pthread_t thread_id[n];
	
	printf("Enter List of Operations: \n");
	for(int j=1; j<=entry; j++){
		scanf(" %s", &operations[j]);
    	}
    	
    	for(int i=1; i<=entry; i++){
    		for(int b=0; b<(2*i); b++){
    			x = pthread_create(&thread_id[b],NULL,OperationChecker,(void *) operations[i-1]);	
    		}
    	}
    	
    	for(int i=1; i<=entry; i++){
    		for(int b=0; b<(2*i); b++){
    			pthread_join(thread_id[b], NULL);
    		}
    	}
    	
	pthread_exit(NULL);
	return 0;
}
