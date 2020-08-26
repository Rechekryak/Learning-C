#include <stdio.h>
#define PRAISE "you are an outstanding person."

int main(void)
{

	char name[40];
	printf("Hello! Please enter your name\n");
	scanf("%s",name);
	printf("%s, %s\n",name, PRAISE);

	return 0;
}
