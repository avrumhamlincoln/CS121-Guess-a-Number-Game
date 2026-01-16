#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char name[20];
	printf("What is your name?: ");
	scanf("%s", name);
	printf("Hi %s! Lets play a game! \n", name);
	printf("I want you to guess number between 1 and 100! \n");

	int guess = 999;
	int keepGoing = 1;
	int turns = 0;

	srand(time(NULL));
	int correct = (rand() % 100) + 1;

	while(keepGoing){
		printf("Pick a number: ");
		scanf("%d", &guess);
		turns = turns + 1;
		
		if (guess > correct){
			printf("Too high!");
		}

		else if (guess < correct){
			printf("Too low!");
		}

		else {
			printf("YIPPIEE!!! YOU GOT IT RGHT \n");
			keepGoing = 0;
		}
	}
	
	if (turns < 7){
		printf("Preformance: Very good \n");
	}
	
	else if (turns == 7){
		printf("Performance: Average.\n");
	}

	else {
		printf("Preformance: Bad ... Try again for a better score \n");
	}

	return 0;
}
