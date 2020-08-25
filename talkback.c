#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];




	printf("Hello! What is your name?\n");
	scanf("%s", name);

	printf("%s, how much do you weigh in pounds?\n",name);
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Great! %s, your volume is %2.2f cubic pounds.\n",name,volume);
	printf("Your name has %d letters.\n",letters);
	printf("40 bytes are used to store your name.\n");

	return 0;
}
