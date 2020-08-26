#include <stdio.h>
#include <string.h>

#define PRAISE "you are an outstanding person."

int main(void)
{
	char name[40];
	
	printf("Hello! Please, enter your name!\n");
	scanf("%s", name);
	printf("%s, %s\n",name, PRAISE);
	printf("Your name contains %zd letters and %zd bytes.\n",strlen(name),sizeof(name));
	printf("PRAISE contain %zd letters and %zd bytes.\n",strlen(PRAISE), sizeof(PRAISE));

	return 0;
}
