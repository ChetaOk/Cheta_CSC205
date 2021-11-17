#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int grade = 80; // Create a global variable to change it in threads

// The function to be executed by all threads
void *myThreadAdd(void *vargp)
{
	int *myid = (int *)vargp;
	static int age=17;
	++age; ++grade;
	printf("Thread to: %d, Age: %d, Grade: %d\n", *myid, ++age, ++grade);
}

int main()
{
	int i;
	pthread_t tid;
	
	for(i=0; i<5; i++)
		pthread_create(&tid, NULL, myThreadAdd, (void *)&tid);
		pthread_join(tid, NULL);
	pthread_exit(NULL);
	return 0;
}
