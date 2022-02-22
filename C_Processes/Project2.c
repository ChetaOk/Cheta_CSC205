#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

char name[30], genre[20];

void *childThread(void* args){
	printf(" %s music genre of interest %s\n", name, genre);
	
	if(genre == "pop"||genre == "Pop"){
		printf("History of Pop\n");
		printf("Pop is a genre of popular music that originated in its modern form during the mid-1950s in the United States and the United Kingdom. The terms popular music and pop music are often used interchangeably, although the former describes all music that is popular and includes many disparate styles.");
	}else if(genre == "rhythm&blues"||genre == "Rhythm&Blues"){
		printf("History of Rhythm & Blues\n");
		printf("Rhythm and blues, often abbreviated as R&B or RnB, is a genre of popular music that originated in African-American communities in the 1940s.");
	}else if(genre == "folk"||genre == "Folk"){
		printf("History of Folk\n");
		printf("Folk music is a music genre that includes traditional folk music and the contemporary genre that evolved from the former during the 20th-century folk revival. Some types of folk music may be called world music.");
	}else if(genre == "classic"||genre == "Classic"){
		printf("History of Classic\n");
		printf("Classical music generally refers to the formal musical tradition of the Western world, considered to be distinct from Western folk music or popular music traditions.");
	}else{
		printf("No history for selected genre\n");
	}
	return NULL;
}

int main(){
	int gap;
	pthread_t pid;
	printf("Enter name\n");
	fgets(name, 30, stdin);
	printf("Enter genre of interest\n");
	fgets(genre, 20, stdin);
	
	fork();
	gap=pthread_create(&pid, NULL, &childThread, NULL);
	
	if(gap==0){
		pthread_create(&pid, NULL, &childThread, NULL);
		pthread_join(pid, NULL);
	}else{
		printf("Parent process exist\n");
	}
	
	return 0;
}
