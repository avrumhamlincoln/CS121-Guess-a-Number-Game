#include <stdio.h>

int main(){
	char name[20];
	printf("What is your name?: ");
	scanf("%s" name);
	printf("Hi %s! Lets play a game! \n", name);
