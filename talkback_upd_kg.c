#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
#define KGTOPOUNDS 2.20462

int main(void)
{
	float weight, weight_in_kg, volume;
	int size, letters;
	char name[40];


	printf("Hello! What is your name?\n");
	scanf("%s", name);

	printf("%s, how much do you weight in kilograms?\n",name);
	scanf("%f", &weight_in_kg);
	weight = weight_in_kg*KGTOPOUNDS;
	printf("%s, your weight in pounds %2.2f.\n", name, weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Great! %s, your volume is %2.2f cubic pounds.\n",name,volume);
	printf("Your name has %d letters.\n",letters);
	printf("40 bytes are used to store your name.\n");

	return 0;
}
